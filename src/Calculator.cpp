#include "Calculator.hpp"
namespace NS {
int Calculator::public_add(int a, int b) const {
    return a + b;
}

int Calculator::private_add(int a, int b) const {
    return a + b % 5;
}
}
