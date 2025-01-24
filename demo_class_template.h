//
// Created by Shoupu Wan on 3/24/23.
//

#ifndef CPPSANDBOX_DEMO_CLASS_TEMPLATE_H
#define CPPSANDBOX_DEMO_CLASS_TEMPLATE_H


#include <utility>

#include <concepts>
#include <span>
#include <iostream>
#include "demo_class_template.h"

template<typename T>
requires std::integral<T>
void my_func(T value) {
    std::cout << "restricted template type: " << value << std::endl;
    if constexpr (std::__1::is_integral_v<T>) { std::cout << "int is integral" << std::endl; }
}

template<typename T>
class demo_class_template {
private:
    T value;
public:
    template<typename... Args>
    explicit demo_class_template(Args &&...args): value(std::forward<Args>(args)...) {}
};


#endif //CPPSANDBOX_DEMO_CLASS_TEMPLATE_H
