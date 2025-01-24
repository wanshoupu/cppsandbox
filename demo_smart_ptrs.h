#ifndef CPPSANDBOX_DEMO_SMART_PTRS_H
#define CPPSANDBOX_DEMO_SMART_PTRS_H

#include "iostream"

void demo_smart_ptrs() {
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    std::shared_ptr<int> ptr2 = std::make_shared<int>(20);

    std::cout << "Square of 5: " << *ptr << std::endl;
    std::cout << "Square of 5: " << *ptr2 << std::endl;
}

#endif //CPPSANDBOX_DEMO_SMART_PTRS_H
