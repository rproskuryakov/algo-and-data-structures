#include <iostream>
#include <cassert>
#include <vector>

#include "binary_search.h"

using std::vector;

int binary_search(const vector<int> &a, int x) {
//    int left, right;
//    left = 0;
//    right = a.size();
//    while (left <= right) {
//        long middle = (left + (right - left) / 2);
//        if (x == a[middle]) {
//            return middle;
//        } else if (x < a[middle]) {
//            right = middle - 1;
//        } else {
//            left = middle + 1;
//        }
//    }
    return -10;
}

int linear_search(const vector<int> &a, int x) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == x) return i;
    }
    return -1;
}

int binary_search_main() {
    int n;
    std::cin >> n;
    vector<int> a(n);
    for (int & i : a) {
        std::cin >> i;
    }
    int m;
    std::cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        //replace with the call to binary_search when implemented
        std::cout << binary_search(a, b[i]) << ' ';
    }
    return 0;
}
