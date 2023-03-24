//
// Created by Shoupu Wan on 3/24/23.
//

#ifndef CPPSANDBOX_STRUCT_DEMO_H
#define CPPSANDBOX_STRUCT_DEMO_H


#include <utility>

class struct_demo {
    std::integer_sequence<int, 0,1,2> seq = std::integer_sequence<int, 0,1,2>();
public:
    virtual ~struct_demo();

    bool operator==(const struct_demo &rhs) const;

    bool operator!=(const struct_demo &rhs) const;

    const std::integer_sequence<int, 0, 1, 2> &getSeq() const;

    void setSeq(const std::integer_sequence<int, 0, 1, 2> &seq);

public:
    struct_demo();
};


#endif //CPPSANDBOX_STRUCT_DEMO_H
