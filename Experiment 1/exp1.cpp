// Analyze if the stack is empty or full, and if elements are present, return the top element in the stack using templates. Also, perform push and pop operations on the stack.

#include <iostream>

template <class T>
class Stack {
   T* arr{nullptr};
   int size{};
   int top{-1};

public:
   Stack(int size) {
      this->size = size;
      arr = new T[size];
   }

   bool isEmpty() {
      return top == -1;
   }

   bool isFull() {
      return top == size - 1;
   }

   void push(T val) {
      if (!isFull()) {
         arr[++top] = val;
      }
   }

   void pop() {
      if (!isEmpty()) {
         --top;
      }
   }

   T peek() {
      if (!isEmpty()) {
         return arr[top];
      }
      return T();
   }
};

int main() {
   Stack<int> s(3);

   s.push(1);
   s.push(2);
   s.push(3);

   if (!s.isEmpty()) {
      std::cout << "Top: " << s.peek() << std::endl;
   }

   s.pop();

   if (!s.isEmpty()) {
      std::cout << "Top after pop: " << s.peek() << std::endl;
   }

   return 0;
}