#include <iostream>


int local_main() {
    int a;
    int b;
    int gcd_result;
    std::cin >> a;
    std::cin >> b;
    long long product = ((long long)a) * b;
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if (a == 0) {
        gcd_result =  b;
    } else {
        gcd_result = a;
    }
    long long lcm = product / gcd_result;
    std::cout << lcm;
    return 0;
}