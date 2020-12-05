#include <iostream>
#include <vector>

#include "majority_element.h"

int count_element(std::vector<int> &a, int elem, int left, int right) {
    int count = 0;
    for (size_t i = left; i < right; ++i) {
        if (a[i] == elem) {
            ++count;
        }
    }
    return count;
}

int recursive_majority_element(std::vector<int> &a, int left, int right) {
    if (left == right - 1) {
        return a[left];
    }

    int middle = (int)((right + left) / 2);
    int left_majority = recursive_majority_element(a, left, middle);
    int right_majority = recursive_majority_element(a, middle, right);
    if (left_majority == right_majority) {
        return left_majority;
    }
    int left_count = count_element(a, left_majority, left, right);
    int right_count = count_element(a, right_majority, left, right);
    return (left_count > right_count) ? left_majority : right_majority;
}

int get_majority_element(std::vector<int> &a, int left, int right) {
    if (left == right - 1) {
        return 1;
    }

    int middle = (int) ((right + left) / 2);
    int left_majority = recursive_majority_element(a, left, middle);
    int right_majority = recursive_majority_element(a, middle, right);
    int left_count = count_element(a, left_majority, left, right);
    int right_count = count_element(a, right_majority, left, right);
    if (left_count > ((right - left) / 2)) {
        return 1;
    }
    if (right_count > ((right - left) / 2)) {
        return 1;
    }
    return 0;
}

int majority_element_main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int &i : a) {
        std::cin >> i;
    }
    std::cout << get_majority_element(a, 0, a.size()) << '\n';
    return 0;
}
