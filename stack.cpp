// Implementation of Stack code in cpp

#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;

public:
// @yadukpb - Added a push function to push an element to stack
    void push(int value) {
        elements.push_back(value);
    }
    
    //delete from stack : Added by adnan
    int pop() {
    if (elements.empty()) {
        std::cout << "Error: Stack is empty" << std::endl;
        return -1;
    }
    int top = elements.back();
    elements.pop_back();
    return top;
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

};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    stack.pop();
    
    stack.reverseStack(stack);
    std::cout << "Elements pushed to the stack: 10, 20, 30" << std::endl;

    return 0;
}

