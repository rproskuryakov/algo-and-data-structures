#include <vector>


int money_change(int money) {
    std::vector<int> n_coins = {0};
    std::vector<int> coins = {1, 3, 4};
    for (int i = 1; i <= money; ++i) {
        bool is_inf = true;
        for (auto &element: coins) {
            if (i >= element) {
                int num_coins = n_coins.at(i - element) + 1;
                if (is_inf) {
                    n_coins.push_back(num_coins);
                    is_inf = false;
                } else if (num_coins < n_coins.at(i)) {
                    n_coins.at(i) = num_coins;
                }
            }
        }
    }
    return n_coins.at(money);
}