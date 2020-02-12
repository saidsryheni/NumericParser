#ifndef ARITHMETICPARSER_CHECKER_H
#define ARITHMETICPARSER_CHECKER_H


class Checker {
public:
    static bool isNumerical(char c);

    static bool isSum(char c);

    static bool isSubtract(char c);

    static bool isMultiplication(char c);

    static bool isDivision(char c);

    static bool isOpenBracket(char c);

    static bool isCloseBracket(char c);

    static bool isWhiteSpace(char c);
};


#endif //ARITHMETICPARSER_CHECKER_H
