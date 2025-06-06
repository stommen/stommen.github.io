///////// Student Info /////////
//
//           Your Name: Oscar Stommendal
//      Your NTU Email: N2402294F@e.ntu.edu.sg
//
//
//

#include <iostream>
using namespace std;

struct MarkNode {
    int mark; // Changed to int
    MarkNode* next;
};

// Function to insert a node at the end of the linked list
void insertNode2ListEnd(MarkNode*& head, int newValue) {
    MarkNode* newNode = new MarkNode;
    newNode->mark = newValue;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    MarkNode* temp = head;
    while (temp->next != nullptr) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link last node to new node
}

void destroyList(MarkNode*& head)
{
    MarkNode *nodePtr = head;  // Start at head of list
    MarkNode *garbage = nullptr;

    while (nodePtr != nullptr)
    {
        // garbage keeps track of node to be deleted
        garbage = nodePtr;
        // Move on to the next node, if any
        nodePtr = nodePtr->next;
        // Delete the "garbage" node
        delete garbage;
        garbage = nullptr;
    }
    head = nullptr;
}

// Function to get the value of the n-th node
int getNthNodeValue(const MarkNode* head, int n) {
    if (head == nullptr) {
        return -1; // Return -1 if the list is empty
    }

    const MarkNode* current = head;
    for (int i = 1; i < n; i++) {
        if (current->next == nullptr) {
            return -1; // Return -1 if n exceeds the length of the list
        }
        current = current->next;
    }
    return current->mark;
}

int main() {
    MarkNode* head = nullptr; // Initialize an empty linked list

    // Insert nodes into the linked list
    insertNode2ListEnd(head, 10); // Insert 10
    insertNode2ListEnd(head, 20); // Insert 20
    insertNode2ListEnd(head, 30); // Insert 30
    insertNode2ListEnd(head, 40); // Insert 40

    // Test cases
    cout << getNthNodeValue(head, 1) << endl; // Output: 10
    cout << getNthNodeValue(head, 2) << endl; // Output: 20
    cout << getNthNodeValue(head, 4) << endl; // Output: 40
    cout << getNthNodeValue(head, 5) << endl; // Output: -1 (exceeds length)
    cout << getNthNodeValue(nullptr, 1) << endl; // Output: -1 (empty list)

    // Clean up memory 
    destroyList(head);
    return 0;
}


