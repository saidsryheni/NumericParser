#include "SubtractionNode.h"

SubtractionNode::SubtractionNode() : Node() {

}

void SubtractionNode::evaluate() {
    getLeftChild()->evaluate();
    getRightChild()->evaluate();
    long long leftChildValue = getLeftChild()->getValue();
    long long rightChildValue = getRightChild()->getValue();
    setValue(leftChildValue - rightChildValue);
}
