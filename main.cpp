//#include "SortAlgorithm.h"
#include "Container.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    //  Sets up the SortAlgorithms
    SelectionSort sel;
    BubbleSort bub;
    MergeSort merge;

    SelectionSort* s = &sel;
    BubbleSort* b = &bub;
    MergeSort* m = &merge;

    //  Declare a vector
    vector <int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);

    //  Declare a list
    list <int> l;
    l.push_back(3);
    l.push_back(5);
    l.push_back(2);
    l.push_back(1);
    l.push_back(4);

    //  Containers
    VectorContainer vc(v);
    ListContainer lc(l);

    //  Tests the at, swap and insert
    cout << "VC Position at 0: " << vc.at(0) << endl;
    cout << "LC Position at 1: " << lc.at(1) << endl;

    vc.swap(0, 1);
    lc.swap(0, 1);

    vc.insert(6);
    lc.insert(6);

    //  Prints out the containers
    cout << "The size of VC is " << vc.size() << endl;
    vc.print();
    cout << "The size of LC is " << lc.size() << endl;
    lc.print();

    //  Sorts
    //  SelectionSort
    VectorContainer vcS(v);
    ListContainer lcS(l);
    vcS.set_sort(s);
    lcS.set_sort(s);
   
    //  Pre-sort
    vcS.print();
    lcS.print();
    //  Sorted
    vcS.sort();
    vcS.print();
    lcS.sort();
    lcS.print();
    return 0;
}
