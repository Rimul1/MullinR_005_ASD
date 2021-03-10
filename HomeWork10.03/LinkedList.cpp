#include <iostream>

using namespace std;

struct Node {
    int item;
    Node *next;
    Node *prev;
};

struct LinkedList {
    Node *first = nullptr;
    Node *last = nullptr;
    int count;

    void add(int item) {
        Node *node = new Node;
        node->item = item;
        if (first == nullptr) {
            first = node;
            return;
        } else {
            last->next = node;
            node->prev = last;
        }

        last = node;
        count++;

    }


    int get(int index) {
        if (index < 0) {
            throw new exception;
        }

        if (index > count) {
            throw new exception;
        }

        int size = 0;
        Node *node = first;
        while (size != index) {
            size++;
            node = node->next;
        }
        return node->item;
    }


    void insertAt(int item, int id) {
        Node *temp = first;
        Node *node = new Node;
        node->item = item;
        int count = 0;
        while (temp != nullptr && id != count) {
            count++;
            temp = temp->next;
        }
        if (id == 0) {
            node->next = first;
            first = node;
        } else if (id == count) {
            add(item);
        } else {
            temp->prev->next = node;
            node->prev = temp->prev;
            temp->prev = node;
            node->next = temp;
        }

    }
        void PrintAll() {
            if (!first) {
                cout << "LinkedList is empty!" << endl;
                return;
            }


            Node *copyOfPHead = this->first;
            cout << copyOfPHead->item << endl;
            while (copyOfPHead->next != 0) {

                copyOfPHead = copyOfPHead->next;
                cout << copyOfPHead->item << endl;
            }
            return;
        }

 void removeAt(int i) {
        if (i < 0) {
            throw new exception();
        }

        if (i > count) {
            throw new exception();
        }

        int size = 0;
        Node *node = first;
        while (size != i) {
            size++;
            node = node->next;
        }

        Node *prev = node->prev;
        Node *next = node->next;

        prev->next = next;
        next->next = prev;
        count--;
    }
};


int main() {
    LinkedList *stack = new LinkedList;

    stack->add(10);
    stack->add(20);

    cout << stack->get(3) << endl;
    cout << stack->get(1) << endl;

    delete stack;
    return 0;
}
