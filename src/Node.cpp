#include "Node.h"

Node::Node(){
    this->leftChild = 0;
    this->rightChild = 0;
    value = 0;
}

Node* Node::getLeftChild(){
    return leftChild;
}

void Node::setLeftChild(Node* leftChild){
    this->leftChild = leftChild;
}

Node* Node::getRightChild(){
    return rightChild;
}

void Node::setRightChild(Node* rightChild){
    this->rightChild = rightChild;
}

long long Node::getValue(){
    return value;
}

void Node::setValue(long long value){
    this->value = value;
}
