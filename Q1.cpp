#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;
#define MAX_SIZE 100000

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            std::cout << "Stack Overflow" << std::endl;
        } else {
            top++;
            arr[top] = value;
            std::cout << "Pushed " << value << " to the stack." << std::endl;
        }
    }

    void pop() {
        if (top < 0) {
            std::cout << "Stack Underflow" << std::endl;
        } else {
            int value = arr[top];
            top--;
            std::cout << "Popped " << value << " from the stack." << std::endl;
        }
    }

    void display() {
        if (top < 0) {
            std::cout << "Stack is empty" << std::endl;
        } else {
            std::cout << "Stack elements are:";
            for (int i = 0; i <= top; i++) {
                std::cout << " " << arr[i];
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    auto start = high_resolution_clock::now();
    
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
   // s.display();
    s.pop();
    //s.display();
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by code: " << duration.count() << " microseconds." << endl;

    
    return 0;
}
