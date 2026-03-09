//linked list implementation in c++
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
    head->next = new nodee(20);
    head->next->next = new nodee(30);
    
    // Print the linked list
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