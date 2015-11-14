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

<<<<<<< HEAD
class BubbleSort: public sortAlgorithm
=======
class SelectionSort: public SortAlgorithm 
>>>>>>> origin/rhom001
{
 public:
    void sort(Container* c);
};

<<<<<<< HEAD
class SelectionSort: public sortAlgorithm 
=======
class BubbleSort: public SortAlgorithm
>>>>>>> origin/rhom001
{
 public:
    void sort(Container* c);
};

<<<<<<< HEAD
class MergeSort: public sortAlgorithm
=======

class MergeSort: public SortAlgorithm
>>>>>>> origin/rhom001
{
 public:
    void sort(Container* c);
    void merge(Container *c, int low, int mid, int high);
    void merge_sort(Container *c, int low, int high);
};

#endif
