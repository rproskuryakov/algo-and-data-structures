#include <iostream>


int local_main() {
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if (a == 0) {
        std::cout << b;
    } else {
        std::cout << a;
    }
    return 0;
}
