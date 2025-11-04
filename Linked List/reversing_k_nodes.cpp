#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* createNode(int data) {
    Node* new_node = new Node(data);
    return new_node;
}

Node* reverseKNodes(Node* head, int k) {
    Node* prevptr = NULL;
    Node* currentptr = head;
    Node* nextptr = NULL;
    int count = 0;

    while (currentptr != NULL && count < k) {
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
        count++;
    }

    if (nextptr != NULL) {
        head->next = reverseKNodes(nextptr, k);
    }

    return prevptr;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int n, k;
    cout<<"Enter the number of nodes: ";
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    cout<<"Enter the values of nodes: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        Node* newNode = createNode(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout<<"Enter the node to be reversed: ";
    cin >> k;

    cout << "Original Linked List: ";
    displayList(head);

    head = reverseKNodes(head, k);

    cout << "Modified Linked List: ";
    displayList(head);

    deleteList(head);

    return 0;
}
