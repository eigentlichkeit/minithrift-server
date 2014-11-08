#include "CalculatorHandler.hpp"

namespace foo {
namespace bar {
namespace baz {

CalculatorHandler::CalculatorHandler()
{
}

double CalculatorHandler::add(const double a, const double b)
{
    cout << "CalculatorHandler::add(" << a << ", " << b << ")" << endl;
    return a + b;
}

double CalculatorHandler::sub(const double a, const double b)
{
    cout << "CalculatorHandler::sub(" << a << ", " << b << ")" << endl;
    return a - b;
}

double CalculatorHandler::mul(const double a, const double b)
{
    cout << "CalculatorHandler::mul(" << a << ", " << b << ")" << endl;
    return a * b;
}

double CalculatorHandler::div(const double a, const double b)
{
    cout << "CalculatorHandler::div(" << a << ", " << b << ")" << endl;
    if (b == 0) {
        cerr << "Throwing ArithmeticException ..." << endl;
        ArithmeticException e;
        e.message = "Ouch!";
        throw e;
    }
    return a / b;
}

} // namespace baz
} // namespace bar
} // namespace foo
