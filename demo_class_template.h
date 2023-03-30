//
// Created by Shoupu Wan on 3/24/23.
//

#ifndef CPPSANDBOX_DEMO_CLASS_TEMPLATE_H
#define CPPSANDBOX_DEMO_CLASS_TEMPLATE_H


#include <utility>

template<typename T>
class demo_class_template {
private:
    T value;
public:
    template<typename... Args>
    explicit demo_class_template(Args &&...args): value(std::forward<Args>(args)...) {}
};


#endif //CPPSANDBOX_DEMO_CLASS_TEMPLATE_H
