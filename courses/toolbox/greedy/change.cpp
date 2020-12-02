#include <iostream>

#include "change.h"

int get_change(int m) {
    int n_coins = 0;
    while (m > 0) {
        if (m - 10 >= 0) {
            m = m - 10;
        } else if (m - 5 >= 0) {
            m = m - 5;
        } else {
            m = m - 1;
        }
        ++n_coins;
    }
    return n_coins;
}

int local_main() {
    int m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
}
