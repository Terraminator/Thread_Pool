#include <string.h>
#include <windows.h>
#include <iostream>
#include <vector>
#include <thread>

using namespace std;


class Thread_Pool {
public:
    vector<thread*> Pool;
    Thread_Pool() {
        cout << "Test";
    }

private:
    thread * start_thread(int *target) {
        thread t(target);
        return(&t);
    }

    int wait_for_thread(thread *thread) {
        *thread->join;
        return(0);
    }

public:

    int wait_for_pool() {
        for (int i = 0; i < sizeof(Pool); i++) {
            thread *t = Pool[i];
        }
        return(0);
    }

    int start_pool(int number, int *target) {
        for (int i = 1; i < number; i++) {
            thread *t = start_thread(target);
            Pool.push_back(addressof(*t));
        }
        return(0);
    }

    int add_thread_to_pool(int *target) {
        thread* t = start_thread(target);
        Pool.push_back(addressof(*t));
    }
};