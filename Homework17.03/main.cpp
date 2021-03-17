#include <iostream>
using namespace std;

 struct Node {
     int value;
     Node *next = NULL;
     Node *prev = NULL;
     Node()
     {

     }

     Node(int value)
     {
         this->value = value;

     }
 };

 struct SortedList {
     Node *first = nullptr;
     Node *other = nullptr;

 public:
     void add(int v) {
         Node* node = new Node();
         node->value = v;
         if (first == nullptr) {
             first = node;
             other = node;
             return;
         }
         Node* temp = other;
         Node* replacement;
         while (temp != nullptr) {
             if (node->value == temp->value) {
                 return;
             }
             if (node->value > temp->value) {
                 if (temp == other) {
                     node->prev = other;
                     other->next = node;
                     other = node;
                     return;
                 }
                 replacement = temp->next;
                 temp->next = node;
                 node->prev = temp;
                 node->next = replacement;
                 replacement->prev = node;
                 return;
             }
             temp = temp->prev;
         }
         replacement = first;
         first->prev = node;
         first = node;
         node->next = replacement;
     }


     int get(int id) {
         int count = 0;
         int value;
         Node *tempHead = first;
         while (count != id) {
             count++;
             tempHead = tempHead->next;
             value = tempHead->value;
         }
         return value;
     }

     int size() {
         Node *tempHead = first;
         int count = 1;
         while (tempHead->next != nullptr) {
             tempHead = tempHead->next;
             count++;
         }
         return count;
     }


     void remove(int id) {
         Node *tempHead = first;
         int count = 0;
         while (tempHead != nullptr && id != count) {
             count++;
             tempHead = tempHead->next;
         }
         if (id == 0) {
             first->next->prev = nullptr;
             first = first->next;
         } else if (id == size() - 1) {
             tempHead->prev->next = nullptr;
             tempHead = tempHead->prev;

         } else {
             tempHead->prev->next = tempHead->next;
             tempHead->next->prev = tempHead->prev;
         }
     }

     void addUnique(int value)
     {
         if (!first)
         {
             first = new Node(value);
             return;
         }
         if ((!first->next) && (value != first->value))
         {
             if (first->value >= value)
             {
                 Node *temp = first;
                 first = new Node(value);
                 first->next = temp;
             } else
             {
                 first->next = new Node(value);
             }
             return;
         }
         if (!first->next)
             return;
         bool flag = true;
         for (int i = 0; i < size(); ++i)
         {
             if (value == get(i))
                 flag = false;
         }
         if (flag)
         {


             Node *headLink = first;
             Node *previous = nullptr;
             while ((first) && (first->value <= value))
             {
                 previous = first;
                 first = first->next;
             }
             if ((first != nullptr) && (first->value >= value))
             {
                 if (headLink->value >= value)
                 {
                     first = new Node(value);
                     first->next = headLink->next;
                     add(headLink->value);
                     return;
                 }
                 previous->next = new Node(value);
                 previous->next->next = first;
                 first = headLink;
                 return;
             } else
             {
                 first = new Node(value);
                 previous->next = first;
                 first = headLink;
             }
         }
     }

     static SortedList *Union(SortedList *a, SortedList *b) {
         SortedList *unionList = new SortedList;
         Node *temp = a->first;
         Node *temp2 = b->first;
         while (temp != nullptr && temp2 != nullptr) {
             if (temp->value < temp2->value) {
                 unionList->add(temp->value);
                 temp = temp->next;
             } else if (temp->value == temp2->value) {
                 unionList->add(temp2->value);
                 temp2 = temp2->next;
                 temp = temp->next;
             } else {
                 unionList->add(temp2->value);
                 temp2 = temp2->next;
             }

         }
         return unionList;
     }

     SortedList *intersect(SortedList *a, SortedList *b) {
         SortedList *intersectList = new SortedList;
         Node *temp = a->first;
         Node *temp2 = b->first;
         while (temp != nullptr && temp2 != nullptr) {
             if (temp->value == temp2->value) {
                 intersectList->add(temp->value);
                 temp2 = temp2->next;

             } else if (temp->value < temp2->value)
                 temp = temp->next;
             else temp2 = temp2->next;

         }
         return intersectList;

     }

     SortedList *difference(SortedList *a, SortedList *b) {
         SortedList *differenceList = new SortedList;
         Node *temp = a->first;
         Node *temp2 = b->first;
         while (temp != nullptr && temp2 != nullptr) {
             if (temp->value == temp2->value) {
                 temp = temp->next;

             } else if (temp->value > temp2->value)
                 temp2 = temp2->next;
             else {
                 differenceList->add(temp->value);
                 temp = temp->next;
             }
         }
         return differenceList;
     }

     void printAll() {
         Node* temp = first;
         while (temp != nullptr) {
             cout << temp->value << " ";
             temp = temp->next;
         }
         cout << endl;
     }
     };


     int main() {

         SortedList *aList = new SortedList;

         aList->add(0);
         aList->add(44);
         aList->add(10);
         aList->add(9);
         aList->add(9);
         aList->add(9);
         aList->printAll();

         SortedList *bList = new SortedList;
         bList->add(1);
         bList->add(10);
         bList->add(19);
         bList->add(9);

         SortedList::Union(aList, bList)->printAll();
         return 0;
     }

