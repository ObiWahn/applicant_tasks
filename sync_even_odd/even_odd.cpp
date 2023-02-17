#include "even_odd.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

void print_odd() {
    std::this_thread::sleep_for(1ms);
    static int i = 1;
    std::cout << i << std::endl;
    i += 2;
}

void print_even() {
    std::this_thread::sleep_for(3ms);
    static int i = 2;
    std::cout << i << std::endl;
    i += 2;
}
