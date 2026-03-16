#include <iostream>
using namespace std;

class nodee {
    public:
    
    int data;
    nodee* next;

    nodee(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

int main() {
    nodee* head = new nodee(10);
    nodee* second = new nodee(20);
    nodee* third = new nodee(30);

    

    nodee* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    current = head;
    while (current != nullptr) {
        nodee* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}