#include <iostream>
using namespace std;

/* ---------------- Node Structure ---------------- */
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

/* 1. Recursive Search in BST */
Node* recursiveSearch(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return recursiveSearch(root->left, key);
    else
        return recursiveSearch(root->right, key);
}

/* 2. Non-Recursive (Iterative) Search in BST */
Node* iterativeSearch(Node* root, int key) {
    while (root != nullptr) {
        if (root->data == key)
            return root;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

/* 3. Recursive Insertion in BST */
Node* recursiveInsert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);

    if (key < root->data)
        root->left = recursiveInsert(root->left, key);
    else if (key > root->data)
        root->right = recursiveInsert(root->right, key);
    // duplicate keys are ignored

    return root;
}

/* 4. Non-Recursive Insertion in BST */
Node* iterativeInsert(Node* root, int key) {
    Node* newNode = new Node(key);

    if (root == nullptr)
        return newNode;

    Node* parent = nullptr;
    Node* curr = root;

    while (curr != nullptr) {
        parent = curr;
        if (key < curr->data)
            curr = curr->left;
        else if (key > curr->data)
            curr = curr->right;
        else
            return root; // duplicate
    }

    if (key < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

/* 5(a). Recursive Minimum and Maximum */
Node* findMinRecursive(Node* root) {
    if (root == nullptr || root->left == nullptr)
        return root;
    return findMinRecursive(root->left);
}

Node* findMaxRecursive(Node* root) {
    if (root == nullptr || root->right == nullptr)
        return root;
    return findMaxRecursive(root->right);
}

/* 5(b). Iterative Minimum and Maximum */
Node* findMinIterative(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Node* findMaxIterative(Node* root) {
    while (root && root->right)
        root = root->right;
    return root;
}

/* 6. Delete a Node from BST */
Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Case 1 & 2: No child or one child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children
        Node* temp = findMinRecursive(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

/* Inorder Traversal */
void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

/* 7 & 8. Main Program */
int main() {
    Node* root = nullptr;
    int n, value, delKey, searchKey;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = recursiveInsert(root, value);
    }

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Enter value to delete: ";
    cin >> delKey;
    root = deleteNode(root, delKey);

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Enter value to search: ";
    cin >> searchKey;

    if (iterativeSearch(root, searchKey))
        cout << "Key found after deletion\n";
    else
        cout << "Key not found after deletion\n";

    return 0;
}
