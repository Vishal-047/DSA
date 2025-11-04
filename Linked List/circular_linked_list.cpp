#include <iostream>

using namespace std;

// Node structure for circular linked list
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Class for Circular Linked List with a header node
class CircularLinkedList {
private:
    Node* header;  // Header node of the circular linked list
    
public:
    // Constructor
    CircularLinkedList() {
        header = new Node(-1);  // Create a header node with dummy data
        header->next = header;  // Initially, header points to itself
    }

    // Destructor to free up memory
    ~CircularLinkedList() {
        if (header->next == header) {
            // Empty list
            delete header;
            return;
        }
        
        Node* current = header->next;
        Node* nextNode;

        // Traverse and delete nodes
        while (current != header) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        delete header;
    }

    // Insert node at the end of the circular list
    void insert(int value) {
        Node* newNode = new Node(value);
        Node* temp = header;

        // Traverse to the last node
        while (temp->next != header) {
            temp = temp->next;
        }

        // Insert the new node
        temp->next = newNode;
        newNode->next = header;
    }

    // Traverse and print the circular linked list
    void traverse() const {
        Node* temp = header->next;

        // Traverse the list
        while (temp != header) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    CircularLinkedList list;
    
    // Inserting values into the circular linked list
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    // Traversing and printing the list
    cout << "Circular Linked List: ";
    list.traverse();

    return 0;
}
