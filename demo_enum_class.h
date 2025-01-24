#ifndef CPPSANDBOX_DEMO_ENUM_CLASS_H
#define CPPSANDBOX_DEMO_ENUM_CLASS_H

#define ENUM_CLASS_NAME(EnumType) #EnumType
#define ENUM_TO_STRING(value) #value
enum class Color {
    Red,
    Green,
    Blue
};
#endif //CPPSANDBOX_DEMO_ENUM_CLASS_H
