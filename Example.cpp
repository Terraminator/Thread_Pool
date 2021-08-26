#include "Thread_Pool.hpp"


int foo() {
	cout << "Test";
	return(0);
}


Thread_Pool tpool;
int (*fooptr)() { &foo };
tpool.start_pool(5, fooptr, 1);
tpool.wait_for_pool();