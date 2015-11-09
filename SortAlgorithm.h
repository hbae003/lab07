#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H

#include "Container.h"

class SortAlgorithm
{
 public: 
    virtual void sort(Container* c) = 0;
};

class BubbleSort: public SortAlgorithm
{
 public:
    void sort(Container* c);
};

class SelectionSort: public SortAlgorithm 
{
 public:
    void sort(Container* c);
};

class MergeSort: public SortAlgorithm
{
 public:
    void sort(Container* c);
    void merge(Container *c, int low, int mid, int high);
    void merge_sort(Container *c, int low, int high);
};

#endif
