#include "SortAlgorithm.h" 
#include "Container.h" 
#include <vector> 

void SelectionSort::sort(Container *c) 
{ 
    int i, j;
    int smallest = 0;
    for (i = 0; i < c->size(); i++) 
    {
        smallest = i;
        for (j = i; j < c->size(); j++) 
        { 
            if(c->at(j) < c->at(smallest)) 
            {  
                smallest = j; 
            } 
        } 
        c->swap(smallest, i);  
    } 
}

void BubbleSort::sort(Container *c) 
{ 
    bool done = false;
    do 
    {
        done = true;
        for(int i = 0; i < (c->size() - 1); i++)
        {
            if(c->at(i) > c->at(i + 1))
            {
                c->swap(i, i + 1);
                done = false;
            }
        }
    } while(!done);
}  
 
void MergeSort::sort(Container *c) 
{
    int low = 0;
    int high  = c->size() - 1;
    int mid = (low + high) / 2; 
    merge_sort(c, low, mid); 
    merge_sort(c, mid+1, high);
    cout << "Test Container: 3 5 2 1 4" << endl
        << "Correct Temp: 3 2 0 4 1" << endl; 
    merge(c, low, high, mid);
    return;   
}  
 
void MergeSort::merge_sort(Container *c, int low, int high) 
{ 
    int mid; 
    if(low < high) 
    { 
        mid = (low + high) / 2;
        merge_sort (c, low, mid); 
        merge_sort (c, mid + 1, high); 
        merge (c, low, high, mid); 
    } 
    return; 
} 
 
void MergeSort::merge(Container *c, int low, int high, int mid) 
{ 
    int i = low; 
    int j = mid + 1;   
    vector<int> temp; 
    while (i <= mid && j <= high) 
    { 
        if (c->at(i) < c->at(j)) 
        { 
            temp.push_back(i); 
            i++; 
        } 
        else 
        { 
            temp.push_back(j); 
            j++; 
        } 
    } 
    while (i <= mid) 
    { 
        temp.push_back(i); 
        i++; 
    } 
    while (j <= high) 
    { 
        temp.push_back(j); 
        j++; 
    }
    //  Test Case
    cout << "Temp Values: ";
    for(unsigned k = 0; k < temp.size(); k++)
    {
        cout << temp.at(k) << " ";
    }
    cout << endl;
    
    //since temp is sorted. changed c to temp 
    for(unsigned u = low; u < temp.size(); u++) 
    { 
        if(c->at(temp.at(u)) < c->at(u))
        {
            cout << "Check " << u << " - " << temp.at(u)
                << ": c->at(u): " << c->at(u) << "; c->at(temp.at(u)): " 
                << c->at(temp.at(u)) << endl;
            c->swap(temp.at(u), u);
            /*
            //  Show current vector
            cout << "Temp Values: ";
            for(unsigned k = 0; k < temp.size(); ++k)
            {
                cout << temp.at(k) << " ";
            }
            cout << endl;
            */
            cout << "Swapped! Result is: " << endl;
            c->print();
        }        
    }
} 
