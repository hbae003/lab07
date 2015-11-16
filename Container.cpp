#include "Container.h"
#include "SortAlgorithm.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

//  Container abstract base class
Container::Container()
{}
Container::Container(SortAlgorithm* s)
    : algorithm(s)
{}

//  VectorContainer derived class
//  VectorContainer class constructor
VectorContainer::VectorContainer(vector <int> &v)
    : Container(), vc(v)
{} 

//  Returns the element at index i
int VectorContainer::at(int i)
{
    return vc.at(i);
}

//  Swaps the elements at index i and index j
void VectorContainer::swap(int i, int j)
{
    if((i > this->size()) || (j > this->size()))
    {
        cout << "Error: out of range" << endl;
        return;
    }
    int temp = vc.at(i);
    vc.at(i) = vc.at(j);
    vc.at(j) = temp;
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
    cout << "Vector Container:\t";
    for(unsigned i = 0; i < vc.size(); ++i)
    {
        cout << vc.at(i);
        if(i < (vc.size() - 1))
        {
            cout << " ";
        }
    }
    cout << endl;
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

//clears vector
void VectorContainer::erase()
{
    vc.clear();
}

//  ListContainer derived class
//  ListContainer class constructor
ListContainer::ListContainer(list <int> &l)
    : Container(), lc(l)
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
    if((i > this->size()) || (j > this->size()))
    {
        cout << "Error: index exceeds bounds" << endl;
        return;
    }
    for(int n = 0; n < i; n++)
    {
        itA++;
    }
    for(int n = 0; n < j; n++)
    {
        itB++;
    }
    //list <int>::iterator temp = itA;
    int temp = *itA;
    *itA = *itB;
    *itB = temp;
    return;
}

//  Inserts int i at the end of the container
void ListContainer::insert(int i)
{
    lc.push_back(i);
    return;
}

//  Prints every element in order
void ListContainer::print()
{
    cout << "List Container:\t\t";
    for(list <int>::iterator it = lc.begin(); it != lc.end(); ++it)
    {
        cout << *it;
        list <int>::iterator next = it;
        next++;
        if(next != lc.end())
        {
            cout << " ";
        }
    }  
    cout << endl;
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

//clears list 
void ListContainer::erase()
{
    lc.clear();
}
