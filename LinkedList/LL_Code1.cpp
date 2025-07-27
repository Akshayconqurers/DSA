#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Step 1: Create 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Step 2: Add data
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    // Step 3: Print the linked list
    Node* temp = head;  // Temporary pointer to traverse the list
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}


OUTPUT

10 -> 20 -> 30 -> NULL


  
Node* head	    Pointer to the first node
new Node()	    Create a node in memory
head->data = 10;	    Store 10 as data in the node
head->next = second;	    Connect first node to second node
while (temp != nullptr)	    Loop through all nodes until end of list
cout << temp->data	     Print the data of the current node
