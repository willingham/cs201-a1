#ifndef HEAP_H
#define HEAP_H

#include "node.h"
#include "linkedList.h"

typedef struct heap heap;
struct heap
{
    struct node *rootNode;
    struct list *queue;
    struct list *stack;
    int size;
};

extern heap *newHeap(void);
extern void insertItem(heap *h, int i);
extern void heapifyUp(heap *h);
extern void heapifyDown(heap *h);
extern int heapSize(heap *h);
extern void printHeap(heap *h);

#endif
