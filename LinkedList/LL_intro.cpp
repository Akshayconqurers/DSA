struct Node {
    int data;      // The data part
    Node* next;    // Pointer to the next node
};


Node* head = new Node();  // new = creates memory dynamically
head->data = 10;
head->next = nullptr;     // No next node yet


Node* second = new Node();
second->data = 20;
second->next = nullptr;

head->next = second;  // Connect first node to second

OUTPUT

[10] -> [20] -> NULL
