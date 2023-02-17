#include <thread>
#include <iostream>
#include "even_odd.h"


struct enumerator {
    enumerator(std::size_t times)
    : t1(&enumerator::even, this, times)
    , t2(&enumerator::odd, this, times)
    { }


    ~enumerator() {
        t1.join();
        t2.join();
    }

    // please syncronize the following two functions
    void even(std::size_t times) {
        int i=0;
        while (i++ < times) {
            print_even();
        }
    };

    void odd (std::size_t times) {
        int i=0;
        while (i++ < times) {
            print_odd();
        }
    };

    std::thread t1;
    std::thread t2;
};

int main() {
    enumerator(5);
};
