#ifndef FOO_BAR_BAZ_CALCULATORHANDLER_HPP
#define FOO_BAR_BAZ_CALCULATORHANDLER_HPP

#include <iostream>

#include "Calculator.h"

using namespace std;

namespace foo {
namespace bar {
namespace baz {

class CalculatorHandler : public CalculatorIf
{
public:
    CalculatorHandler();
    double add(const double a, const double b);
    double sub(const double a, const double b);
    double mul(const double a, const double b);
    double div(const double a, const double b);
};

} // namespace baz
} // namespace bar
} // namespace foo

#endif // FOO_BAR_BAZ_CALCULATORHANDLER_HPP
