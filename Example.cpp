#include "Thread_Pool.hpp"

int foo(int a) {
    cout << a << endl;
    return 0;
}


int main() {
    Thread_Pool tpool;
    tpool.start_pool(5, foo, 1);
    tpool.wait_for_pool();
}
