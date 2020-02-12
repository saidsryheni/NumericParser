#ifndef ARITHMETICPARSER_SUBTRACTIONNODE_H
#define ARITHMETICPARSER_SUBTRACTIONNODE_H

#include "Node.h"

class SubtractionNode : public Node {
public:
    SubtractionNode();

    void evaluate();
};


#endif //ARITHMETICPARSER_SUBTRACTIONNODE_H
