#ifndef MYSTACK_HPP
#define MYSTACK_HPP

#include <string>

// MyStack class definition
class MyStack {
    static constexpr int MAX_SIZE = 10; // Maximum size of the stack
    static constexpr int EMPTY_STACK_VALUE = -1; // Empty stack value for index and return

private:
    int stack[MAX_SIZE]; // Array to store stack elements
    int topIndex; // Index of the top element in the stack

public:
    // Constructor
    MyStack();

    // Push an element onto the stack
    bool push(int value);

    // Pop an element from the stack
    void pop();

    // Get the top element of the stack
    // RETURN: Top element of the stack
    int top() const;

    // Check if the stack is empty
    // RETURN: true if the stack is empty, false otherwise
    bool empty() const;

    // Check if the stack is full
    // RETURN: true if the stack is full, false otherwise
    bool full() const;

    // Print and returns elements of stack
    // RETURN: A string representation of the stack elements
    std::string print() const;
};

#endif //MYSTACK_HPP

