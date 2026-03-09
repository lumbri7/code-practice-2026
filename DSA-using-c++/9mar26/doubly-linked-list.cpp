//doubly linked list implementation in c++
#include <iostream>
using namespace std;

class nodee {
    public:
    int data;
    nodee* next;
    nodee* prev;
    nodee(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

int main() {
    nodee* head = new nodee(10);
    nodee* second = new nodee(20);
    nodee* third = new nodee(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    // Print the doubly linked list
    nodee* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Clean up memory
    current = head;
    while (current != nullptr) {
        nodee* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}