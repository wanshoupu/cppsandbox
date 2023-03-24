//
// Created by Shoupu Wan on 3/24/23.
//

#include "struct_demo.h"

struct_demo::struct_demo() {}

struct_demo::~struct_demo() {

}

const std::integer_sequence<int, 0, 1, 2> &struct_demo::getSeq() const {
    return seq;
}

void struct_demo::setSeq(const std::integer_sequence<int, 0, 1, 2> &seq) {
    struct_demo::seq = seq;
}

bool struct_demo::operator==(const struct_demo &rhs) const {
    return seq == rhs.seq;
}

bool struct_demo::operator!=(const struct_demo &rhs) const {
    return !(rhs == *this);
}
