#include <iostream>
using namespace std;
// Define the structure for a node
struct Node {
    int data;
    Node* next;
};

void ibeg(Node*& head, int insert_data) {
    // Create a new node
    Node* newnode = new Node;
    newnode->data = insert_data;
    newnode->next = head;
    head = newnode;
}
void iend(Node*& head, int insert_data)
{
    // Create a new node
    Node* newnode = new Node;
    newnode->data = insert_data;
    newnode->next = nullptr;
    if (head == nullptr) {
        head = newnode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newnode;
}
void dbeg(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty."<<endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "First item Deleted."<<endl;
}
void dend(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty."<<endl;
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while (temp->next != nullptr) {
        prev = temp;
        temp = temp->next;
    }
    if (prev == nullptr) {
        head = nullptr;
    } else {
        prev->next = nullptr;
    }
    delete temp;
    cout << "Deleted."<<endl;
}
void display(Node* p) {
    if (head == nullptr) {
        cout << "List is empty."<<endl;
        return;
    }
    cout << "Linked List: ";
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout <<endl;
}
int main() {
    int num, d;
    Node* head = nullptr;
    cout << "\t\tLinked list operations"<<endl<<endl;
    while (1) {
        cout << "\t1.Insert at the beginning\t2.Insert at the end\t3.Delete from the beginning"<<endl;
        cout << "\t3.Delete from the beginning\t4.Delete from the end\t5.Display\t6.Exit"<<endl;
        cout << "Select the operation: ";
        cin >> num;
        switch (num) {
            case 1:
                cout << "Insert data at the beginning: ";
                cin >> d;
                ibeg(head, d);
                break;
            case 2:
                cout << "Insert data at the end: ";
                cin >> d;
                iend(head, d);
                break;
            case 3:
                dbeg(head);
                break;
            case 4:
                dend(head);
                break;
            case 5:
                display(head);
                break;
            case 6:
                exit(0);
            default:
                cout << "Invalid Selection!"<<endl;
        }
    }
    return 0;
}

