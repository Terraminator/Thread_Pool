#include <iostream>
#include <vector>
#include <thread>

using namespace std;


class Thread_Pool {
public:
    vector<thread> Pool;

    int wait_for_pool() {
        for (thread& t : Pool) {
            t.join();
        }
        return 0;
    }

    int start__pool(int number, int (*target)(int), int arg) {
        for (int i{ 0 }; i < number; i++) {
            Pool.emplace_back(target, arg);
        }
        return 0;
    }

    int start_pool(int (*target)(int), int arg) {
        Pool.emplace_back(target, arg);
        return 0;
    }
};