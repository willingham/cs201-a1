#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"
#include "node.h"
#include "heap.h"

int compare(int type, node *a, node *b) // compare nodes based on heap type (max/min)
{

    if (!type) //min heap
    {
        return a->value>b->value;
    } else if (type) //max heap
    {
        return a->value<b->value;
    }
    return 0;
}

void importFile(heap *h, char* fName) // read ints from file into heap
{
    int i = 0;
    FILE* file = NULL;
    if ((file = fopen(fName,"r")))
    {
    
    int result = fscanf(file, "%d", &i);
    while (!feof(file))
    {
        if (result == 0)
        {
            fprintf(stderr, "Error: Invalid input in file. Only integers allowed.\n");
            exit(-1);
        }
        insertItem(h, i);
        result = fscanf(file, "%d", &i);
    }
    fclose(file);
    } else {
        fprintf(stderr,"Error: File does not exist.");
    }
}
