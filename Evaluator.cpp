#include "Evaluator.h"

long long Evaluator::evaluate(Node *ast) {
    ast->evaluate();
    return ast->getValue();
}