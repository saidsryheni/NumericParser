#ifndef ARITHMETICPARSER_NODE_H
#define ARITHMETICPARSER_NODE_H


class Node {
private:
    Node* leftChild;
    Node* rightChild;
    long long value;

public:
    Node();

    Node* getLeftChild();

    void setLeftChild(Node* leftChild);

    Node* getRightChild();

    void setRightChild(Node* rightChild);

    long long getValue();

    void setValue(long long value);

    virtual void evaluate() = 0;
};


#endif //ARITHMETICPARSER_NODE_H
