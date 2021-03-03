#include <iostream>
using namespace std;


struct Node

{
    int item;
    Node * next;
    Node * prev;
};

struct LinkedList
{
    Node * first = 0;
    Node * last = 0;
    int count;

public: void add(int item) {
        Node *node = new Node;
        node->item = item;
        if (first == nullptr) {
            first = node;
        } else {
            last->next = node;
            node->prev = last;
        }
        last = node;
        count++;
    }

public: int get(int i) {
        if (i < 0) {
            cout <<"Нет эллемента с таким индексом!" << endl;
        }
        if (i > count) {
            cout <<"Нет эллемента с таким инедксом!" << endl;
        }

        int size = 0;
        Node *node = first;
        while (size != i) {
            size++;
            node = node->next;
        }
        return node->item;
    }

};

int main(){
    LinkedList * linkedList = new LinkedList;

    linkedList->add(5);
    linkedList->add(6);
    linkedList->add(3);

    cout << linkedList->get(1) << endl;
    cout << linkedList->count;
    return 0;
};

