#include <iostream>

#include "fib_sum_ldigit.h"

long fibonacci_digit_sum(int number) {
    long n_1 = 0;
    long n_2 = 1;

    if (number == 0 || number == 1) {
        return number;
    }
    long acc = 0;
    for (int i = 1; i < number; ++i) {
        acc = n_1 + n_2;
        n_1 = n_2;
        n_2 = acc;
    }
    return acc;
}

int local_main() {
    long long n;
    std::cin >> n;
    long long m = (n + 2) % 60;
    //std::cout << m << std::endl;
    long fib = fibonacci_digit_sum(m) % 10;
    if (fib == 0) {
        std::cout << 9;
    } else {
        std::cout << fib - 1;
    }
    //std::cout << fib << std::endl;
    return 0;
}