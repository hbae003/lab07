#include "Container.h"
#include "SortAlgorithm.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

//  Container abstract base class
Container::Container(SortAlgorithm* s)
    : algorithm(s)
{}

//  VectorContainer derived class
//  VectorContainer class constructor
VectorContainer::VectorContainer(vector <int> &v, SortAlgorithm* s)
    : Container(s), vc(v)
{} 

//  Returns the element at index i
int VectorContainer::at(int i)
{
    return vc.at(i);
}

//  Swaps the elements at index i and index j
void VectorContainer::swap(int i, int j)
{
    swap(vc.at(i), vc.at(j));
    return;
}

//  Inserts an element to the end of the container
void VectorContainer::insert(int element)
{
    vc.push_back(element);
    return;
}

//  Prints every element in the container
void VectorContainer::print()
{
    for(unsigned i = 0; i < vc.size(); ++i)
    {
        cout << vc.at(i) << endl;
    }
    return;
}

//  Prints the number of elements in the container
int VectorContainer::size()
{
    return vc.size();
}

//  Sets a private member variable of SortAlgorithm* algorithm
void VectorContainer::set_sort(SortAlgorithm* s)
{
    algorithm = s;
    return;
}

//  Calls SortAlgorithm algorithm's sort function
void VectorContainer::sort()
{
    algorithm->sort(this);
    return;
}

//  ListContainer derived class
//  ListContainer class constructor
ListContainer::ListContainer(list <int> &l, SortAlgorithm* s)
    : Container(s), lc(l)
{}

//  Returns element at index i
int ListContainer::at(int i)
{
    list <int>::iterator it = lc.begin();
    for(int n = 0; n < i; n++)
    {
        it++;
    }
    return *it;
}

//  Swaps the elements at index i and index j
void ListContainer::swap(int i, int j)
{
    list <int>::iterator itA = lc.begin();
    list <int>::iterator itB = lc.begin();
    for(int n = 0; n < i; n++)
    {
        itA++;
    }
    for(int n = 0; n < j; n++)
    {
        itB++;
    }
    list <int>::iterator temp = itA;
    *itA = *itB;
    *itB = *temp;
    return;
}

//  Prints every element in order
void ListContainer::print()
{
    for(list <int>::iterator it = lc.begin(); it != lc.end(); ++it)
    {
        cout << *it << endl;
    }
    return;
}

//  Prints the number of elements in the list
int ListContainer::size()
{
    return lc.size();
}

//  Sets the SortAlgorithm* algorithm 
void ListContainer::set_sort(SortAlgorithm* s)
{
    algorithm = s;
    return;
}

//  Calls the SortAlgorithm's sort function
void ListContainer::sort()
{
    algorithm->sort(this);
    return;
}
