#include <algorithm>
#include <iostream>
#include <vector>

#include "majority_element.h"

int count_element(std::vector<int> &a, int majority_cand, int left, int right) {
    int count = 0;
    for (size_t i = left; left < right; left++) {
        if (a[i] == majority_cand) {
            ++count;
        }
    }
    return count;
}

int recursive_majority_element(std::vector<int> &a, int left, int right) {
    if (right == left) {
        return a[left];
    }

    int middle = (int) ((left + right) / 2);
    int left_majority = recursive_majority_element(a, left, middle);
    int right_majority = recursive_majority_element(a, middle, right);

    if (left_majority == right_majority) {
        return left_majority;
    }
    int left_count = count_element(a, left_majority, left, middle);
    int right_count = count_element(a, right_majority, middle, right);
    return (left_count < right_count) ? left_count : right_count;
}

int get_majority_element(std::vector<int> &a, int left, int right) {
    //int majority = recursive_majority_element(a, left, right);
    return -1;
}

int majority_element_main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int & i : a) {
        std::cin >> i;
    }
    std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
    return 0;
}
