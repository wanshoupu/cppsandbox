#ifndef CPPSANDBOX_DEMO_RANGES_H
#define CPPSANDBOX_DEMO_RANGES_H

#include "iostream"

void demo_ranges() {
    std::vector<int> vec = {3, 2, 1};
    std::ranges::sort(vec);
    for (int i: vec) {
        std::cout << i << std::endl;
    }
}

#endif //CPPSANDBOX_DEMO_RANGES_H
