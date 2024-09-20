#include <iostream>
#include "myStack.hpp"

// int main() {
//         MyStack stack;
//
//         // Test push
//         for (int i = 0; i < 12; ++i) {
//             if (stack.push(i)) {
//                 std::cout << "Pushed: " << i << std::endl;
//             } else {
//                 std::cout << "Stack is full. Cannot push: " << i << std::endl;
//             }
//         }
//
//         // Test print
//         std::cout << "Stack contents: ";
//             stack.print();
//
//         // Test top
//         std::cout << "Top element: " << stack.top() << std::endl;
//
//         // Test pop
//         stack.pop();
//         std::cout << "After pop, stack contents: ";
//         stack.print();
//
//         // Test empty and full
//         std::cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << std::endl;
//         std::cout << "Is stack full? " << (stack.full() ? "Yes" : "No") << std::endl;
//
//         return 0;
//
// }
