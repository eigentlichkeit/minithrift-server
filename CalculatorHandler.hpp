#ifndef FOO_BAR_BAZ_CALCULATORHANDLER_HPP
#define FOO_BAR_BAZ_CALCULATORHANDLER_HPP

#include <iostream>

#include "calculator_types.h"
#include "Calculator.h"

using namespace std;

namespace foo {
namespace bar {
namespace baz {

class CalculatorHandler : public CalculatorIf
{
public:
    CalculatorHandler();
    virtual double perform(const Operation& o);
};

} // namespace baz
} // namespace bar
} // namespace foo

#endif // FOO_BAR_BAZ_CALCULATORHANDLER_HPP
