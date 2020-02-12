#include <excpt.h>
#include "DivisionNode.h"

DivisionNode::DivisionNode() : Node() {

}

void DivisionNode::evaluate() {
    getLeftChild()->evaluate();
    getRightChild()->evaluate();
    long long leftChildValue = getLeftChild()->getValue();
    long long rightChildValue = getRightChild()->getValue();
    if(rightChildValue == 0) throw "Division By Zero!";
    setValue(leftChildValue / rightChildValue);
}
