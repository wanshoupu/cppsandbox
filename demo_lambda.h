#ifndef CPPSANDBOX_DEMO_LAMBDA_H
#define CPPSANDBOX_DEMO_LAMBDA_H

#include <functional>
#include <algorithm>
#include <memory>
#include <optional>
#include <variant>
#include <vector>
#include <span>
#include <string>
#include <iostream>

using IntFunction = int (*)(int);

void demo_lambda() {
    auto lambda = [](int x) { return x * x; };
    //decltype(lambda) lambda2 = [](int x) { return x * x; };

    auto autolambda = [](auto x, auto y) { return x + y; };
    std::function<int(int)> lambda2 = [lambda](int x) { return lambda(x); };  // use the defined lambda as captured variable
    std::cout << lambda2(5) << std::endl;  // Should output 25
    std::cout << "Square of 5: " << lambda(5) << std::endl;
    std::cout << "Square of 5: " << IntFunction(lambda)(5) << std::endl;
    std::cout << "int + string: " << autolambda(5, "hello world") << std::endl;
    std::cout << "int + int: " << autolambda(5, 5) << std::endl;
}

#endif //CPPSANDBOX_DEMO_LAMBDA_H
