#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Container;

class SortAlgorithm
{
 public: 
    virtual void sort(Container* c) = 0;
};

class BubbleSort: public sortAlgorithm
{
 public:
    void sort(Container* c);
};

class SelectionSort: public sortAlgorithm 
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
