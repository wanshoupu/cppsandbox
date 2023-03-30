#include "circular_pointer_demo/mutual_pointer.h"
#include "circular_pointer_demo/reductive_version.h"
#include "sequences/integer_seq.h"

int main() {
    demo_memory_leak();
    demo_reductive_circular_dep();
    demo_int_sequence();
}