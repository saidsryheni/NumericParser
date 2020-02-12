#ifndef ARITHMETICPARSER_SUMNODE_H
#define ARITHMETICPARSER_SUMNODE_H

#include "Node.h"

class SumNode : public Node {
public:
    SumNode();

    void evaluate();
};


#endif //ARITHMETICPARSER_SUMNODE_H
