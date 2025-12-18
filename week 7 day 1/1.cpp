#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Create linked list from array
Node* createList(int arr[], int n) {
    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

// Traverse and print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Search an element
void search(Node* head, int x) {
    int pos = 1;
    while (head != NULL) {
        if (head->data == x) {
            cout << "Element found at position " << pos << endl;
            return;
        }
        pos++;
        head = head->next;
    }
    cout << "Element not found" << endl;
}

// Insert at end
Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Insert at beginning
Node* insertBeginning(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    return newNode;
}

// Delete by value
Node* deleteByValue(Node* head, int x) {
    if (head == NULL)
        return head;

    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    while (curr->next != NULL && curr->next->data != x)
        curr = curr->next;

    if (curr->next != NULL) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    return head;
}

// Delete at given position
Node* deleteAtPosition(Node* head, int pos) {
    if (head == NULL)
        return head;

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
        curr = curr->next;

    if (curr != NULL && curr->next != NULL) {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
    return head;
}

// Reverse linked list
Node* reverseList(Node* head) {
    Node *prev = NULL, *curr = head, *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Count number of nodes
int countNodes(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Insert after given value
void insertAfter(Node* head, int x, int y) {
    while (head != NULL) {
        if (head->data == x) {
            Node* newNode = new Node();
            newNode->data = y;
            newNode->next = head->next;
            head->next = newNode;
            return;
        }
        head = head->next;
    }
    cout << "Value not found" << endl;
}

// Print elements in reverse using recursion
void printReverse(Node* head) {
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->data << " ";
}

// Main function
int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    Node* head = createList(arr, n);

    cout << "Initial list: ";
    printList(head);

    search(head, 30);

    head = insertEnd(head, 50);
    cout << "After inserting at end: ";
    printList(head);

    head = insertBeginning(head, 5);
    cout << "After inserting at beginning: ";
    printList(head);

    head = deleteByValue(head, 20);
    cout << "After deleting value 20: ";
    printList(head);

    head = deleteAtPosition(head, 3);
    cout << "After deleting position 3: ";
    printList(head);

    head = reverseList(head);
    cout << "Reversed list: ";
    printList(head);

    cout << "Number of nodes: " << countNodes(head) << endl;

    insertAfter(head, 30, 35);
    cout << "After inserting 35 after 30: ";
    printList(head);

    cout << "Print in reverse (recursion): ";
    printReverse(head);
    cout << endl;

    return 0;
}

