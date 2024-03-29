#include <stdio.h>
#include <stdlib.h>
#include "node.h"

node *newNode()
{
    node *n = (node *) malloc(sizeof(node));
    if (n==0) { fprintf(stderr,"out of memory"); exit(-1); }
    
    n->value = 0;
    n->parent = NULL;
    n->leftChild = NULL;
    n->rightChild = NULL;

    return n;
}

void setNodeValue(node *n, int value)
{
    n->value = value;
    return;
}

int getNodeValue(node *n)
{
    return n->value;
}

void setNodeLeftChild(node *n, node *leftChild)
{
    n->leftChild = leftChild;
    return;
}

node *getNodeLeftChild(node *n)
{
    return n->leftChild;
}

void setNodeRightChild(node *n, node *rightChild)
{
    n->rightChild = rightChild;
    return;
}

node *getNodeRightChild(node *n)
{
    return n->rightChild;
}

void setNodeParent(node *n, node *parent)
{
    n->parent = parent;
    return;
}

node *getNodeParent(node *n)
{
    if (!n)
    {return NULL;}
    else{
        return n->parent;}
}

void swapNodeValue(node *a, node *b)
{
    int temp = a->value;
    a->value = b->value;
    b->value = temp;
}
