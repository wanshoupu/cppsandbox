#ifndef CPPSANDBOX_DEMO_CONSTEXPR_H
#define CPPSANDBOX_DEMO_CONSTEXPR_H

#include <iostream>

constexpr int square(int x) { return x * x; }

constexpr std::string myname(int x) {
    int *ptr = new int(3);
    if (x == ptr[0]) {
        return "zero";
    } else if (x == ptr[1]) {
        return "one";
    } else {
        return "unknown";
    }
}

void demo_constexpr() {
    std::cout << "Square of 5: " << square(5) << std::endl;
    std::cout << "My name: " << myname(3) << std::endl;
}
#endif //CPPSANDBOX_DEMO_CONSTEXPR_H
