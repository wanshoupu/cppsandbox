#include <iostream>
#include <string>

#define ENUM_CLASS_NAME(EnumType) #EnumType
#define ENUM_TO_STRING(value) #value

enum class Color {
    Red,
    Green,
    Blue
};

constexpr int square(int x) { return x * x; }

using IntFunction = int (*)(int);

std::unique_ptr<int> ptr = std::make_unique<int>(10);
std::shared_ptr<int> ptr2 = std::make_shared<int>(20);

constexpr std::string myname(int x) {
    if (x == 0) {
        return "zero";
    } else if (x == 1) {
        return "one";
    } else {
        return "unknown";
    }
}

auto lambda = [](int x) { return x * x; };

auto autolambda = [](auto x, auto y) { return x + y; };

//decltype(lambda) lambda2 = [](int x) { return x * x; };

std::variant<int, std::string> intstring = 42;
std::optional<int> opt = std::nullopt;

auto [a, b] = std::pair(1, 2);

template<typename T>
requires std::integral<T>
void func(T value) {
    std::cout << "restricted template type: " << value << std::endl;
    if constexpr (std::is_integral_v<T>) { std::cout << "int is integral" << std::endl; }
}

int main() {

    std::cout << "Enum value: " << ENUM_TO_STRING(Color::Red) << std::endl;
    std::cout << "Enum value: " << int(Color::Red) << std::endl;
    std::cout << "Enum class name: " << ENUM_CLASS_NAME(Color) << std::endl;
    std::cout << "Square of 5: " << square(5) << std::endl;
    std::cout << "Square of 5: " << lambda(5) << std::endl;
    std::cout << "Square of 5: " << IntFunction(lambda)(5) << std::endl;
    std::cout << "My name: " << myname(5) << std::endl;
    std::cout << "Square of 5: " << *ptr << std::endl;
    std::cout << "Square of 5: " << *ptr2 << std::endl;
    std::cout << "int + string: " << autolambda(5, "hello world") << std::endl;
    std::cout << "int + int: " << autolambda(5, 5) << std::endl;
//    std::cout << "variant int or string: " << get(intstring) << std::endl;
    std::cout << "optional: " << opt.value_or(3) << std::endl;
    std::cout << "pair: " << a << " " << b << std::endl;
    func(int(Color::Blue));
    return 0;
}
