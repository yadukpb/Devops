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
        std::vector<int> temp;
        while (!s.isEmpty()) {
            temp.push_back(s.pop());
        }
        for (int value : temp) {
            s.push(value);
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
        for (int element : elements) {
            if (element == target) {
                return true; // Element found
            }
        }
        return false; // Element not found
    }

    // @uday - Added a function that clears the stack
    void clear() {
        elements.clear();
    }

};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    std::cout << "Stack after pushing 10, 20, 30 is: ";
    stack.print();

    int y = stack.peek();
    std::cout << "Top element is: " << y << std::endl;
    
    y = stack.pop();
    std::cout << "Popped element is: " << y << std::endl;

    bool m = stack.isEmpty();
    std::cout << "Is stack empty? " << (m ? "True" : "False") << std::endl;

    std::cout << "before Reversing";
    stack.print();    
    stack.reverseStack(stack);
    std::cout << "After Reversing";
    stack.print();
    
    y = stack.getMin();
    std::cout << "minimum  element in the stack is: " << y << std::endl;

    m = stack.searchInStack(20);
    std::cout << "Is 20 present in the stack? " << (m ? "True" : "False") << std::endl;

    y = stack.size();
    std::cout << "size of the stack is: " << y << std::endl;

    stack.clear();
    std::cout << "Stack after clearing: ";
    m = stack.isEmpty();
    std::cout << "Is stack empty? " << (m ? "True" : "False") << std::endl;

    return 0;
}

