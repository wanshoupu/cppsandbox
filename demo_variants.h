#ifndef CPPSANDBOX_DEMO_VARIANTS_H
#define CPPSANDBOX_DEMO_VARIANTS_H

#include "iostream"
#include <variant>

void demo_variants() {
    // Declare a variant that can hold either an int or a std::string
    std::variant<int, std::string> intstring = 42;

    // Access the value by index (0 for int, 1 for std::string)
    std::cout << "Holds int: " << std::get<0>(intstring) << std::endl;

    // Assign a string to the variant
    intstring = std::string("Hello, World!");

    // Access the value by type
    std::cout << "Holds string: " << std::get<std::string>(intstring) << std::endl;

}

#endif //CPPSANDBOX_DEMO_VARIANTS_H
