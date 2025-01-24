#include "demo_class_template.h"
#include "demo_enum_class.h"
#include "demo_constexpr.h"
#include "demo_lambda.h"
//#include <expected.hpp>
std::unique_ptr<int> ptr = std::make_unique<int>(10);
std::shared_ptr<int> ptr2 = std::make_shared<int>(20);


std::variant<int, std::string> intstring = 42;
std::optional<int> opt = std::nullopt;

auto [a, b] = std::pair(1, 2);

int main() {
    demo_lambda();

    int arr[] = {1, 2, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    std::span<int> view(arr, length);
    std::vector<int> vec = {3, 2, 1};
    std::ranges::sort(vec);
//    std::expected<int, std::string> result = square(5);

    std::cout << "Enum value: " << ENUM_TO_STRING(Color::Red) << std::endl;
    std::cout << "Enum value: " << int(Color::Red) << std::endl;
    std::cout << "Enum class name: " << ENUM_CLASS_NAME(Color) << std::endl;
    std::cout << "Square of 5: " << square(5) << std::endl;
    std::cout << "My name: " << myname(5) << std::endl;
    std::cout << "Square of 5: " << *ptr << std::endl;
    std::cout << "Square of 5: " << *ptr2 << std::endl;
//    std::cout << "variant int or string: " << get(intstring) << std::endl;
    std::cout << "optional: " << opt.value_or(3) << std::endl;
    std::cout << "pair: " << a << " " << b << std::endl;
    my_func(int(Color::Blue));
    return 0;
}
