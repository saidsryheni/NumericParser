#include "MultiplicationNode.h"

MultiplicationNode::MultiplicationNode() : Node() {

}

void MultiplicationNode::evaluate() {
    getLeftChild()->evaluate();
    getRightChild()->evaluate();
    long long leftChildValue = getLeftChild()->getValue();
    long long rightChildValue = getRightChild()->getValue();
    setValue(leftChildValue * rightChildValue);
}