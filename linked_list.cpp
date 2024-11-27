#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
}

void insertAtBeginning(Node** head, int data) {
    Node* temp = new Node(data);
    temp->next = *head;
    *head = temp;
}

void insertAtEnd(Node** head, int data) {
    Node* temp = new Node(data);
    if (*head == nullptr) {
        *head = temp;
        return;
    }
    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = temp;
}

void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = nullptr;
    if (temp != nullptr && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr) {
        return;
    }
    prev->next = temp->next;
    delete temp;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

