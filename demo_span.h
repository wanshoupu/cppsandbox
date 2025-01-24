#ifndef CPPSANDBOX_DEMO_SPAN_H
#define CPPSANDBOX_DEMO_SPAN_H

#include "iostream"
#include <span>

void demo_span() {
    int arr[] = {1, 2, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    std::span<int> view(arr, length);
    for (int i : view) {
        std::cout << i << std::endl;
    }
}

#endif //CPPSANDBOX_DEMO_SPAN_H
