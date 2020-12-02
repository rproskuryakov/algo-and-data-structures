#include <iostream>
#include <vector>

#include "car_fueling.h"

int compute_min_refills(int dist, int tank, std::vector<int> & stops) {
    int num_refills = 0;
    int current_refill = 0;
    int last_refill;
    int n = stops.size();
    std::vector<int> new_stops(n + 2);
    new_stops[0] = 0;
    new_stops[n + 1] = dist;
    for (size_t i = 1; i <= n; ++i) {
        new_stops[i] = stops[i - 1];
    }
    while (current_refill <= n) {
        last_refill = current_refill;
        while (current_refill <= n && new_stops[current_refill + 1] - new_stops[last_refill] <= tank) {
            ++current_refill;
        }
        if (current_refill == last_refill) {
            return -1;
        }
        if (current_refill <= n) {
            num_refills = num_refills + 1;
        }
    }
    return num_refills;
}


int local_main() {
    int d = 0;
    std::cin >> d;
    int m = 0;
    std::cin >> m;
    int n = 0;
    std::cin >> n;

    std::vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        std::cin >> stops.at(i);

    std::cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
