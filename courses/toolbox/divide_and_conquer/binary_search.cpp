#include <iostream>
#include <cassert>
#include <vector>

#include "binary_search.h"

using std::vector;

long binary_search(const vector<int> &a, int x) {
    long left, right;
    left = 0;
    right = (long) a.size();
    while (left <= right) {
        long middle = (long)(left + (right - left) / 2);
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

int linear_search(const vector<int> &a, int x) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == x) return i;
    }
    return -1;
}

int local_main() {
    int n;
    std::cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
        std::cin >> a[i];
    }
    int m;
    std::cin >> m;
    vector<long> b(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        //replace with the call to binary_search when implemented
        std::cout << binary_search(a, b[i]) << ' ';
    }
}
