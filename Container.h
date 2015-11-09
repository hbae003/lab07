#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include <vector>
#include <list>

#include "SortAlgorithm.h"

class Container
{
    private:
        SortAlgorithm* algorithm;
    public:
        Container(SortAlgorithm* s);
        virtual int at(int i) = 0;
        virtual void swap(int i, int j) = 0;
        virtual void insert(int element) = 0;
        virtual void print() = 0;
        virtual int size() = 0;
        virtual void set_sort(SortAlgorithm* s) = 0;
        virtual void sort() = 0;
};

class VectorContainer
{
    private:
        vector <int> vc;
    public:
        VectorContainer(vector <int> &v, SortAlgorithm* s);
        int at(int i);
        void swap(int i, int j);
        void insert(int element);
        void print();
        int size();
        void set_sort(SortAlgorithm* s);
        void sort();
};

class ListContainer
{
    private:
        list <int> lc;
        vector <int> temp;
    public:
        ListContainer(list <int> &l, SortAlgorithm* s);
        int at(int i);
        void swap(int i, int j);
        void insert(int element);
        void print();
        int size();
        void set_sort(SortAlgorithm* s);
        void sort();
};


#ifndef //  CONTAINER_H
