#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* head;

public:
    Stack() {
        head = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        std::cout << "Pushed " << value << " to the stack." << std::endl;
    }

    void pop() {
        if (head == nullptr) {
            std::cout << "Stack Underflow" << std::endl;
        } else {
            int value = head->data;
            Node* temp = head;
            head = head->next;
            delete temp;
            std::cout << "Popped " << value << " from the stack." << std::endl;
        }
    }

    void display() {
        if (head == nullptr) {
            std::cout << "Stack is empty" << std::endl;
        } else {
            std::cout << "Stack elements are:";
            Node* temp = head;
            while (temp != nullptr) {
                std::cout << " " << temp->data;
                temp = temp->next;
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
    s.display();
    s.pop();
    s.display();
    
        auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by code: " << duration.count() << " microseconds." << endl;
    
    return 0;
}
