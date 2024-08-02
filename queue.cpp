#include <iostream>
#include <queue>

void print(std::queue<int> queue) {
    std::queue<int> q = queue;
    while(!q.empty()) {
        std::cout << q.front() << '\n';
        q.pop();
    }
}

int main() {
    std::queue<int> queue;
    queue.push(5);
    queue.push(19);
    queue.push(102030);
    print(queue);
    std::cout << "\n\n";
    queue.pop();
    queue.push(17);
    print(queue);
    std::cout << "\n\n" << queue.size() << '\n';
    return EXIT_SUCCESS;
}