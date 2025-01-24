#ifndef CPPSANDBOX_DEMO_ENUM_CLASS_H
#define CPPSANDBOX_DEMO_ENUM_CLASS_H

#define ENUM_CLASS_NAME(EnumType) #EnumType
#define ENUM_TO_STRING(value) #value
enum class Color {
    Red,
    Green,
    Blue
};

void demo_enum_class(){
    std::cout << "Enum value: " << ENUM_TO_STRING(Color::Red) << std::endl;
    std::cout << "Enum value: " << int(Color::Red) << std::endl;
    std::cout << "Enum class name: " << ENUM_CLASS_NAME(Color) << std::endl;
}
#endif //CPPSANDBOX_DEMO_ENUM_CLASS_H
