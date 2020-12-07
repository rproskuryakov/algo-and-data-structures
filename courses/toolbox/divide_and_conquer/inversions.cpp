#include <iostream>
#include <vector>

#include "inversions.h"

long long get_number_of_inversions(std::vector<int> &a, std::vector<int> &b, size_t left, size_t right) {
    long long number_of_inversions = 0;
    if (left + 1 == right) {
        b[left] = a[left];
        return number_of_inversions;
    }

    size_t ave = (right + left) / 2;
    number_of_inversions += get_number_of_inversions(a, b, left, ave);
    number_of_inversions += get_number_of_inversions(a, b, ave, right);

    std::vector<int> intermediate = {};
    size_t left_counter = 0;
    size_t right_counter = 0;
    while (left + left_counter != ave && ave + right_counter != right) {
        if (b[left + left_counter] <= b[ave + right_counter]) {
            intermediate.push_back(b[left + left_counter]);
            ++left_counter;
        } else {
            intermediate.push_back(b[ave + right_counter]);
            ++right_counter;
            number_of_inversions += (long long)(ave - (left + left_counter));
        }
    }
    while (left + left_counter != ave) {
        intermediate.push_back(b[left + left_counter]);
        ++left_counter;
    }
    while (ave + right_counter != right) {
        intermediate.push_back(b[ave + right_counter]);
        ++right_counter;
    }
    for (int i = 0; i < (right - left); ++i) {
        b[left + i] = intermediate[i];
    }
    return number_of_inversions;
}

int inversions_main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++) {
        std::cin >> a[i];
    }
    std::vector<int> b(a.size());
    std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
    return 0;
}
