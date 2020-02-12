#ifndef ARITHMETICPARSER_PARSER_H
#define ARITHMETICPARSER_PARSER_H

#include <bits/stdc++.h>
#include "Checker.h"
#include "Node.h"
#include "NumericalNode.h"
#include "SumNode.h"
#include "SubtractionNode.h"
#include "MultiplicationNode.h"
#include "DivisionNode.h"

using namespace std;

class Parser {
private:
    string str;
    vector<int> match;

    bool precalc();

    int getLastSumOrSubtractionIndex(int begin, int end);

    int getLastMultiplicationOrDivisionIndex(int begin, int end);

    void moveBeginEnd(int& begin, int& end);

    Node* parseRange(int begin, int end);
public:
    Parser(const string& str);

    Node* parse();
};


#endif //ARITHMETICPARSER_PARSER_H
