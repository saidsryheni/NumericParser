#ifndef ARITHMETICPARSER_NUMERICALNODE_H
#define ARITHMETICPARSER_NUMERICALNODE_H

#include "Node.h"

class NumericalNode : public Node {
public:
    NumericalNode(char c);

    void evaluate();
};


#endif //ARITHMETICPARSER_NUMERICALNODE_H
