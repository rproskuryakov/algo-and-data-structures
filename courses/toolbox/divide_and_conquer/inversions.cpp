#include <iostream>
#include <vector>

#include "inversions.h"

long long get_number_of_inversions(std::vector<int> &a, std::vector<int> &b, size_t left, size_t right) {
    return -10;
//    long long number_of_inversions = 0;
//    if (right <= left + 1) return number_of_inversions;
//    size_t ave = left + (right - left) / 2;
//    number_of_inversions += get_number_of_inversions(a, b, left, ave);
//    number_of_inversions += get_number_of_inversions(a, b, ave, right);
//    //write your code here
//    return number_of_inversions;
}

int inversions_main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int & i : a) {
        std::cin >> i;
    }
    std::vector<int> b(a.size());
    std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
    return 0;
}
