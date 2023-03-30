//
// Created by Shoupu Wan on 3/29/23.
//

#ifndef CPPSANDBOX_REDUCTIVE_VERSION_H
#define CPPSANDBOX_REDUCTIVE_VERSION_H

#include <iostream>
#include <memory> // for std::shared_ptr

class Resource {
public:
    std::shared_ptr<Resource> m_ptr{}; // initially created empty

    Resource() { std::cout << "Resource acquired\n"; }

    ~Resource() { std::cout << "Resource destroyed\n"; }
};

int demo_reductive_circular_dep() {
    auto ptr1{std::make_shared<Resource>()};

    ptr1->m_ptr = ptr1; // m_ptr is now sharing the Resource that contains it

    return 0;
}

#endif //CPPSANDBOX_REDUCTIVE_VERSION_H
