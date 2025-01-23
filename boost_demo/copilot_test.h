//
// Created by Shoupu Wan on 6/13/23.
//

#ifndef CPPSANDBOX_COPILOT_TEST_H
#define CPPSANDBOX_COPILOT_TEST_H

#include <iostream>
#include <memory> // for std::shared_ptr
#include <string>

class CopilotTest {
    std::string m_name;
    std::shared_ptr<CopilotTest> m_partner; // initially created empty
public:
    CopilotTest() = default;

    ~CopilotTest() = default;

    void test();

};

class Copilot {
public:
    Copilot() = default;

    ~Copilot() = default;

    void test();
};

#endif //CPPSANDBOX_COPILOT_TEST_H
