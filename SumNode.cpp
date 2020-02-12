#include "SumNode.h"

SumNode::SumNode() : Node() {

}

void SumNode::evaluate() {
    getLeftChild()->evaluate();
    getRightChild()->evaluate();
    long long leftChildValue = getLeftChild()->getValue();
    long long rightChildValue = getRightChild()->getValue();
    setValue(leftChildValue + rightChildValue);
}