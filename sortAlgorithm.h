#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H

#include "Container.h"

class sortAlgorithm
{
 public: 
    virtual void sort(Container* c) = 0;
};

class bubbleSort: public sortAlgorithm
{
 public:
    void sort(Container* c);
};

class selectionSort: public sortAlgorithm 
{
 public:
    void sort(Container* c);
};

class MergeSort: public sortAlgorithm
{
 public:
    void sort(Container* c);
    void merge(Container *c, int low, int mid, int high);
    void merge_sort(Container *c, int low, int high);
};

#endif
