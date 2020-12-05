#include <iostream>
#include <vector>

#include "binary_search.h"


int binary_search(const std::vector<int> &a, int x) {
    int left, right;
    left = 0;
    right = a.size() - 1;
    while (left <= right) {
        int middle = left + (int)((right - left) / 2);
        if (x == a[middle]) {
            return middle;
        } else if (x < a[middle]) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return -1;
}

int linear_search(const std::vector<int> &a, int x) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == x) return i;
    }
    return -1;
}

int binary_search_main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int & i : a) {
        std::cin >> i;
    }
    int m;
    std::cin >> m;
    std::vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        std::cout << binary_search(a, b[i]) << ' ';
    }
    return 0;
}
