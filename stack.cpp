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
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Elements pushed to the stack: 10, 20, 30" << std::endl;

    return 0;
}