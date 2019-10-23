/*Copyright [year] <Copyright Owner>*/
#include"Queue.h"
#include"Queue.cpp"

int main() {
    Queue<int> q;
    int n;
    std::cin >> n;
    for (int i = 0; i<n; i++) {
        q.Qpush(i + 1);
    }
    std::cout << "size: " << q.Qsize() << std::endl;
    std::cout << "isempty: " << q.isempty() << std::endl;
    while (q.Qsize() != 0) {
        auto test_data = q.Qpop();
        std::cout << test_data << ":::::" << q.Qsize() << std::endl;
    }
    std::cout << "done" << std::endl;
    q.clear();
    std::cout << "clean done" << std::endl;
    return 0;
}
