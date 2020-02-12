#ifndef ARITHMETICPARSER_DIVISIONNODE_H
#define ARITHMETICPARSER_DIVISIONNODE_H

#include "Node.h"


class DivisionNode : public Node {
public:
    DivisionNode();

    void evaluate();
};


#endif //ARITHMETICPARSER_DIVISIONNODE_H
