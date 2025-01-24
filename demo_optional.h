#ifndef CPPSANDBOX_DEMO_OPTIONAL_H
#define CPPSANDBOX_DEMO_OPTIONAL_H

#include <iostream>
#include <optional>

void demo_optional() {
    std::optional<int> opt = std::nullopt;
    std::cout << "optional: " << opt.value_or(3) << std::endl;
}

#endif //CPPSANDBOX_DEMO_OPTIONAL_H
