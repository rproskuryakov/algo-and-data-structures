#include <iostream>
#include <vector>


long long maxPairwiseProduct(const std::vector<int> &array) {
    int first_max = 0;
    int second_max = 0;

    if (array[1] > array[0]) {
        first_max = array[1];
        second_max = array[0];
    } else {
        first_max = array[0];
        second_max = array[1];
    }

    for (int i = 2; i < array.size(); ++i) {
        int current_element = array[i];
        if (current_element > second_max && current_element < first_max)
        {
            second_max = current_element;
        } else if (current_element >= first_max){
            second_max = first_max;
            first_max = current_element;
        }
    }
    return ((long long) first_max) * second_max;
}


int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    long long result = maxPairwiseProduct(numbers);
    std::cout << result;
    return 0;
}
