#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100];
    int size;

public:
    Stack(int s) {
        size = s;
        top = -1;
    }

    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Stack is empty." << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    void isEmpty() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack is not empty." << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
    s.isEmpty();

    return 0;
}