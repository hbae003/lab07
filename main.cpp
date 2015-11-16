#include "SortAlgorithm.h"
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
    v.push_back(15);
    v.push_back(9);
    v.push_back(13);
    v.push_back(11);

    //  Declare a list
    list <int> l;
    l.push_back(3);
    l.push_back(5);
    l.push_back(2);
    l.push_back(1);
    l.push_back(4);
    l.push_back(15);
    l.push_back(9);
    l.push_back(13);
    l.push_back(11);

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
    cout << endl;

    //  Sorts
    cout << "SelectionSort" << endl;
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
    cout << endl;
    
    cout << "BubbleSort" << endl;
    //  BubbleSort
    VectorContainer vcB(v);
    ListContainer lcB(l);
    vcB.set_sort(b);
    lcB.set_sort(b);

    //  Pre-sort
    vcB.print();
    lcB.print();
    //  Sorted
    vcB.sort();
    lcB.sort();
    vcB.print();
    lcB.print();
    cout << endl;
    
    cout << "MergeSort" << endl;
    //  MergeSort
    VectorContainer vcM(v);
    ListContainer lcM(l);
    vcM.set_sort(m);
    lcM.set_sort(m);

    //  Pre-sort
    vcM.print();
    lcM.print();
    //  Sorted
    vcM.sort();
    lcM.sort();
    vcM.print();
    lcM.print();
    
    vcM.erase();
    lcM.erase();

    vcM.insert(69);
    vcM.insert(43);
    vcM.insert(33);
    vcM.insert(21);
    vcM.insert(48);
    vcM.insert(39);
    vcM.insert(59);
   
    lcM.insert(69);
    lcM.insert(43);
    lcM.insert(33);
    lcM.insert(21);
    lcM.insert(48);
    lcM.insert(39);
    lcM.insert(59);
 
    //presort
    vcM.print();
    lcM.print();
    //sorted
    vcM.sort();
    lcM.sort();
    vcM.print();
    lcM.print();
    return 0;
}
