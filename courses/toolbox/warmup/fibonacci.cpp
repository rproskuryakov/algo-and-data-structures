#include <iostream>


int fibonacci(int number) {
    int n_1 = 1;
    int n_2 = 1;

    if (number == 1 || number == 2) {
        return 1;
    }
    int acc = 0;
    for (int i = 2; i < number; ++i) {
        acc = n_1 + n_2;
        n_1 = n_2;
        n_2 = acc;
    }
    return acc;
}

int main() {
    int n;
    std::cin >> n;
    int result = fibonacci(n);
    std::cout << result;
    return 0;
}

