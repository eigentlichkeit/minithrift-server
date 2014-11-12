#include "CalculatorHandler.hpp"

namespace foo {
namespace bar {
namespace baz {

CalculatorHandler::CalculatorHandler()
{
}

double CalculatorHandler::perform(const Operation& o)
{
    double outcome;

    cout << "CalculatorHandler::perform" << endl;
    cout << "o.type = " << o.type << endl;
    cout << "o.op1 = " << o.op1 << endl;
    cout << "o.op2 = " << o.op2<< endl;
    switch (o.type) {
    case OperationType::ADD:
        outcome = o.op1 + o.op2;
        break;
    case OperationType::SUBTRACT:
        outcome = o.op1 - o.op2;
        break;
    case OperationType::MULTIPLY:
        outcome = o.op1 * o.op2;
        break;
    case OperationType::DIVIDE:
        if (o.op2 == 0) {
            cerr << "Throwing ArithmeticException ..." << endl;
            ArithmeticException e;
            e.message = "Division by zero!";
            throw e;
        }
        outcome = o.op1 / o.op2;
        break;
    default:
        cerr << "Throwing IllegalArgumentException ..." << endl;
        IllegalArgumentException e;
        e.message = "Ouch!";
        throw e;
    }

    return outcome;
}

} // namespace baz
} // namespace bar
} // namespace foo
