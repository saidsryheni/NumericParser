#include "Parser.h"

bool Parser::precalc() {
    match = vector<int>(str.size(), -1);
    stack<int> openBracketIds;
    for(int i = 0; i < str.size(); i++){
        if(Checker::isOpenBracket(str[i]))
            openBracketIds.push(i);
        else if (Checker::isCloseBracket(str[i])){
            if(openBracketIds.empty()) return 0;
            else{
                int openBracketId = openBracketIds.top();
                openBracketIds.pop();
                match[openBracketId] = i;
                match[i] = openBracketId;
            }
        }
    }
    return (openBracketIds.empty());
}

int Parser::getLastSumOrSubtractionIndex(int begin, int end) {
    while(begin <= end){
        if(Checker::isSum(str[end]) || Checker::isSubtract(str[end])) return end;
        end--;
    }
    return -1;
}

int Parser::getLastMultiplicationOrDivisionIndex(int begin, int end) {
    while(begin <= end){
        if(Checker::isMultiplication(str[end]) || Checker::isDivision(str[end])) return end;
        end--;
    }
    return -1;
}

void Parser::moveBeginEnd(int &begin, int &end) {
    while(begin <= end && Checker::isWhiteSpace(str[begin])) begin++;
    while(begin <= end && Checker::isWhiteSpace(str[end])) end--;
}

Node* Parser::parseRange(int begin, int end) {
    moveBeginEnd(begin, end);
    if(begin > end) return 0;
    if(begin == end){
        if(Checker::isNumerical(str[begin])) return new NumericalNode(str[begin]);
        return 0;
    }
    // (E)
    if(Checker::isOpenBracket(str[begin]) && Checker::isCloseBracket(str[end]) && match[begin] == end) {
        return parseRange(begin + 1, end - 1);
    }

    int opBegin = begin, opEnd = end;
    // (E) + (E)
    if(Checker::isOpenBracket(str[begin])) opBegin = match[begin] + 1;
    if(Checker::isCloseBracket(str[end])) opEnd = match[end] - 1;
    moveBeginEnd(opBegin, opEnd);

    Node* node = 0;
    int opId = getLastSumOrSubtractionIndex(opBegin, opEnd);
    if(opId != -1){
        if(Checker::isSum(str[opId])) node = new SumNode();
        else node = new SubtractionNode();
    } else {
        opId = getLastMultiplicationOrDivisionIndex(opBegin, opEnd);
        if (opId != -1) {
            if (Checker::isMultiplication(str[opId])) node = new MultiplicationNode();
            else node = new DivisionNode();
        } else return 0;
    }
    Node* leftChild = parseRange(begin, opId - 1);
    if(leftChild == 0) return 0;
    node->setLeftChild(leftChild);
    Node* rightChild = parseRange(opId + 1, end);
    if(rightChild == 0) return 0;
    node->setRightChild(rightChild);
    return node;
}

Parser::Parser(const string& str){
    this->str = str;
}

Node* Parser::parse(){
    this->precalc();
    return parseRange(0, (int)str.size() - 1);
}
