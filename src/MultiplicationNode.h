#ifndef ARITHMETICPARSER_MULTIPLICATIONNODE_H
#define ARITHMETICPARSER_MULTIPLICATIONNODE_H

#include "Node.h"

class MultiplicationNode : public Node {
public:
    MultiplicationNode();

    void evaluate();
};


#endif //ARITHMETICPARSER_MULTIPLICATIONNODE_H
