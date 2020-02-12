#include "Checker.h"

bool Checker::isNumerical(char c) {
    return (c >= '0' && c <= '9');
}

bool Checker::isSum(char c) {
    return (c == '+');
}

bool Checker::isSubtract(char c) {
    return (c == '-');
}

bool Checker::isMultiplication(char c) {
    return (c == '*');
}

bool Checker::isDivision(char c) {
    return (c == '/');
}

bool Checker::isOpenBracket(char c) {
    return (c == '(');
}

bool Checker::isCloseBracket(char c) {
    return (c == ')');
}

bool Checker::isWhiteSpace(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}
