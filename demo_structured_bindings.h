#ifndef CPPSANDBOX_DEMO_STRUCTURED_BINDING_H
#define CPPSANDBOX_DEMO_STRUCTURED_BINDING_H

#include "iostream"

void demo_structured_binding() {
    auto [a, b] = std::pair(1, 2);
    std::cout << "pair: " << a << " " << b << std::endl;
}

#endif //CPPSANDBOX_DEMO_STRUCTURED_BINDING_H
