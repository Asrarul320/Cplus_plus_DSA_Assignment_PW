// Q3. Implement a Linked List class.
// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display functions.



// Solution= 
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// class LinkedList {
// private:
//     Node* head;
//     int size;

// public:
//     LinkedList() {
//         head = nullptr;
//         size = 0;
//     }

//     void insertAtHead(int value) {
//         Node* newNode = new Node(value);
//         newNode->next = head;
//         head = newNode;
//         size++;
//     }

//     void insertAtTail(int value) {
//         Node* newNode = new Node(value);
//         if (!head) {
//             head = newNode;
//         } else {
//             Node* temp = head;
//             while (temp->next)
//                 temp = temp->next;
//             temp->next = newNode;
//         }
//         size++;
//     }

//     void insertAtIndex(int index, int value) {
//         if (index < 0 || index > size) {
//             cout << "Invalid index\n";
//             return;
//         }
//         if (index == 0) {
//             insertAtHead(value);
//             return;
//         }
//         if (index == size) {
//             insertAtTail(value);
//             return;
//         }

//         Node* newNode = new Node(value);
//         Node* temp = head;

//         for (int i = 0; i < index - 1; ++i)
//             temp = temp->next;

//         newNode->next = temp->next;
//         temp->next = newNode;
//         size++;
//     }

//     void deleteHead() {
//         if (!head) {
//             cout << "List is empty\n";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         size--;
//     }

//     void deleteTail() {
//         if (!head) {
//             cout << "List is empty\n";
//             return;
//         }
//         if (!head->next) {
//             delete head;
//             head = nullptr;
//         } else {
//             Node* temp = head;
//             while (temp->next->next)
//                 temp = temp->next;
//             delete temp->next;
//             temp->next = nullptr;
//         }
//         size--;
//     }

//     void deleteAtIndex(int index) {
//         if (index < 0 || index >= size) {
//             cout << "Invalid index\n";
//             return;
//         }
//         if (index == 0) {
//             deleteHead();
//             return;
//         }
//         if (index == size - 1) {
//             deleteTail();
//             return;
//         }

//         Node* temp = head;
//         for (int i = 0; i < index - 1; ++i)
//             temp = temp->next;

//         Node* toDelete = temp->next;
//         temp->next = temp->next->next;
//         delete toDelete;
//         size--;
//     }

//     int get(int index) {
//         if (index < 0 || index >= size) {
//             cout << "Invalid index\n";
//             return -1;
//         }
//         Node* temp = head;
//         for (int i = 0; i < index; ++i)
//             temp = temp->next;
//         return temp->data;
//     }

//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//     }
// };

// // Example usage
// int main() {
//     LinkedList ll;
//     ll.insertAtHead(10);
//     ll.insertAtTail(20);
//     ll.insertAtTail(30);
//     ll.insertAtIndex(1, 15);
//     ll.display();  // 10 -> 15 -> 20 -> 30 -> NULL

//     ll.deleteAtIndex(2);
//     ll.display();  // 10 -> 15 -> 30 -> NULL

//     cout << "Element at index 1: " << ll.get(1) << endl;  // 15

//     ll.deleteHead();
//     ll.deleteTail();
//     ll.display();  // 15 -> NULL

//     return 0;
// }
