#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void append(int value) {
        if (head == nullptr) {
            head = new Node(value);
            return;
        }

        Node* cur = head;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = new Node(value);
    }

    void print() const {
        Node* cur = head;
        while (cur != nullptr) {
            cout << cur->data;
            if (cur->next != nullptr) cout << " -> ";
            cur = cur->next;
        }
        cout << "\n";
    }

    void clear() {
        while (head != nullptr) {
            Node* next = head->next;
            delete head;
            head = next;
        }
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);

    list.print();

    list.clear();
    return 0;
}
