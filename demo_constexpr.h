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

#endif //CPPSANDBOX_DEMO_CONSTEXPR_H
