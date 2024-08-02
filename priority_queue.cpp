#include <iostream>
#include <queue>

void print(std::priority_queue<int> queue) {
    std::priority_queue<int> q = queue;
    while(!q.empty()) {
        std::cout << q.top() << '\n';
        q.pop();
    }
}

int main() {
    std::priority_queue<int> pq;
    
    for(int i = 0; i <= 10; ++i) {
        pq.push(i);
    }
    
    print(pq);

    return EXIT_SUCCESS;
}