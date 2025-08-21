//Apply the concept of Linked list and write code to Insert and Delete an element at the beginning and atend in Doubly and Circular Linked List.

#include <iostream>

using namespace std;

struct Node {
   int data{};
   Node* prev{nullptr};
   Node* next{nullptr};

   Node(int data)
   {
      this->data = data;
   }
};

class DoublyList {
   Node* head{nullptr};
public:
   void insertBegin(int val) {
      Node* temp = new Node(val);

      if(!head)
      {
         head = temp;
         return;
      }

      temp->next = head;
      head = temp;
   }

   void insertEnd(int val) {
      Node* temp = new Node(val);

      if (!head)
      {
         head = temp;
         return;
      }

      Node* cur = head;
      while (cur->next != nullptr)
         cur = cur->next;
      cur->next = temp;
      temp->prev = cur;
   }

   void deleteBegin() {
      if (head == nullptr)
         return;
      Node* temp = head;
      head = head->next;
      if (head != nullptr)
         head->prev = nullptr;
      delete temp;
   }

   void deleteEnd() {
      if (head == nullptr)
         return;
      if (head->next == nullptr) {
         delete head;
         head = nullptr;
         return;
      }
      Node* cur = head;
      while (cur->next != nullptr)
         cur = cur->next;
      cur->prev->next = nullptr;
      delete cur;
   }

   void display() {
      Node* cur = head;
      while (cur != nullptr) {
         cout << cur->data << " ";
         cur = cur->next;
      }
      cout << endl;
   }
};

int main() {
   cout << "Doubly Linked List Output:" << endl;
   DoublyList d;
   d.insertBegin(10);
   d.insertEnd(20);
   d.insertBegin(5);
   cout << "After insertions: ";
   d.display();
   d.deleteBegin();
   d.deleteEnd();
   cout << "After deletions: ";
   d.display();
   return 0;
}
