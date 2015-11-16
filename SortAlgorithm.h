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



class SelectionSort: public SortAlgorithm 
{
 public:
    void sort(Container* c);
};


class BubbleSort: public SortAlgorithm
{
 public:
    void sort(Container* c);
};

class MergeSort: public SortAlgorithm
{
 public:
    void sort(Container* c);
    void merge(vector<int> &c, int low, int mid, int high);
    void merge_sort(vector<int> &c, int low, int high);
};

#endif
