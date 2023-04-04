 #include <iostream>
#include <chrono>
#include <cstdlib>

using namespace std;
using namespace chrono;

#define MAX_SIZE 1000000

class StackArray {
private:
    int arr[MAX_SIZE];
    int top;

public:
    StackArray() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            top++;
            arr[top] = value;
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
        } else {
            top--;
        }
    }
};

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class StackLinkedList {
private:
    Node* top;

public:
    StackLinkedList() {
        top = nullptr;
    }

    void push(int value) {
        Node* node = new Node(value);
        node->next = top;
        top = node;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" << endl;
        } else {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main() {
    // Stack using array
    StackArray stackArray;
    auto start1 = high_resolution_clock::now();
    for (int i = 0; i < MAX_SIZE; i++) {
        int value = rand();
        stackArray.push(value);
    }
    for (int i = 0; i < MAX_SIZE; i++) {
        stackArray.pop();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout << "Time taken by stack using array: " << duration1.count() << " microseconds." << endl;

    // Stack using linked list
    StackLinkedList stackLinkedList;
    auto start2 = high_resolution_clock::now();
    for (int i = 0; i < MAX_SIZE; i++) {
        int value = rand();
        stackLinkedList.push(value);
    }
    for (int i = 0; i < MAX_SIZE/2; i++) {
        stackLinkedList.pop();
    }
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Time taken by stack using linked list: " << duration2.count() << " microseconds." << endl;

    return 0;
}
