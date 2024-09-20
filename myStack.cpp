//
// Created by nhild on 2024-09-18.
//

#include "myStack.hpp"
#include <iostream>
#include <ostream>

// Constructor: Initializes the stack
MyStack::MyStack() : topIndex(EMPTY_STACK_VALUE) {}

// Pushes an element onto the stack
bool MyStack::push(int value) {
    if (full()) return false;
    stack[++topIndex] = value;
    return true;
}

// Pops the top element from the stack
void MyStack::pop() {
    if (!empty()) --topIndex;
}

// Returns the top element of the stack
int MyStack::top() const {
    if (empty()) return EMPTY_STACK_VALUE;
    return stack[topIndex];
}

// Checks if the stack is empty
bool MyStack::empty() const {
    return topIndex == -1;
}

// Checks if the stack is full
bool MyStack::full() const {
    return topIndex == MAX_SIZE - 1;

}
// Prints and Returns elements of the stack
std::string MyStack::print() const {
    std::string result;
    if (empty()) {
        std::cerr << "Stack is Empty!" << std::endl;
        result = "Stack is Empty!";
    } else {
        for (int i = 0; i <= topIndex; ++i) {
            std::cout << stack[i] << " ";
            result += std::to_string(stack[i]) + " ";
        }
        std::cout << std::endl;
    }
    return result;
}
