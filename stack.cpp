#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;
    
    for(int i = 0; i <= 10; ++i) {
        stack.push(i);
    }

    while(!stack.empty()) {
        std::cout << stack.top() << '\n';
        stack.pop();
    }

    return EXIT_SUCCESS;
}