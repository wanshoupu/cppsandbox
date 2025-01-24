#include "demo_class_template.h"
#include "demo_enum_class.h"
#include "demo_constexpr.h"
#include "demo_lambda.h"
#include "demo_smart_ptrs.h"
#include "demo_span.h"
#include "demo_optional.h"
#include "demo_structured_bindings.h"
#include "demo_ranges.h"
#include "demo_variants.h"

//#include <expected.hpp>

int main() {
    demo_lambda();
    demo_smart_ptrs();
    demo_span();
    demo_enum_class();
    demo_constexpr();
    my_func(int(Color::Blue));
    demo_optional();
    demo_structured_binding();
    demo_ranges();
    demo_variants();

    //    std::expected<int, std::string> result = square(5);
    return 0;
}
