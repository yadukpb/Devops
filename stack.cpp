// Implementation of Stack code in cpp
#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>
#include <algorithm>


class Stack {
private:
    std::vector<int> elements;

public:
    // @yadukpb - Added a push function to push an element to stack
    void push(int value) {
        elements.push_back(value);
    }

    // @pratik - Added a function that returns the top of a stack
    int peek() {
        if (elements.empty()) {
            std::cout << "Error: Stack is empty" << std::endl;
            return -1;
        }
        return elements.back();
    }

    //delete from stack : Added by adnan
    int pop() {
        int top = elements.back();
        elements.pop_back();
        return top;
    }
    //@Sithartha - Checking whether the stack is empty or not.
    bool isEmpty() {  
        return elements.empty();
    }


    //@karan - reversing the stack elements
    void reverseStack(Stack &s) {
        Stack auxStack;
        while (!s.isEmpty()) {
            auxStack.push(s.pop());
        }
        while (!auxStack.isEmpty()) {
            s.push(auxStack.pop());
        }
    }

    // @maurya - Added function print()
    void print() {
        std::cout << "Stack: ";
        for (int i = elements.size() - 1; i >= 0; i--) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }

    //@lohith - Added a function that returns the min element of the stack
    int getMin() {
        if (elements.empty()) {
            std::cout << "Error: Stack is empty" << std::endl;
            return -1;
        }
        return *std::min_element(elements.begin(), elements.end());
    }

    //@praneeth - Added a function that returns the size of the stack
    int size() {
        return elements.size();
    }

    //@shiraz - Added a function that searches for an element in a stack
    bool searchInStack(int target) {
        while (!elements.empty()) {
            if (elements.top() == target) {
                return true; // Element found
            }
            s.pop(); // Remove the top element
        }
        return false; // Element not found
    }

};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Elements pushed to the stack: 10, 20, 30" << std::endl;
    stack.pop();
    
    stack.reverseStack(stack);
    stack.searchInStack(20);
    stack.print();
    
    int x = stack.getMin();
    std::cout << "minimum  element in the stack is: " << x << std::endl;

    x = stack.size();
    std::cout << "size of the stack is: " << x << std::endl;


    return 0;
}

