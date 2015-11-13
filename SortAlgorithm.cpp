#include "SortAlgorithm.h" 
#include "Container.h" 
#include <vector> 

void BubbleSort::sort(Container *c) 
{ 
    bool done = false;
    do 
    {
        done = true;
        for(int i = 0; i < c->size(); i++)
        {
            if(c->at(i) > c->at(i + 1))
            {
                c->swap(i, i + 1);
                done = false;
            }
        }
    } while(!done);
}  
 
void SelectionSort::sort(Container *c) 
{ 
    for (int i = 1; i < c->size(); i++) 
    {  
        int smallest = c->at(i - 1); 
        int loc = i - 1; 
        int prev = i - 1;
        for (int j = i; j < c->size(); j++) 
        { 
            if(c->at(j) < smallest) 
            {  
                smallest = c->at(j); 
                loc = j; 
            } 
        } 
        swap(loc, prev);  
    } 
}

void MergeSort::sort(Container *c) 
{ 
    merge_sort(c, 0, c->size());    
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
            temp.push_back(c->at(i)); 
            i++; 
        } 
        else 
        { 
            temp.push_back(c->at(j)); 
            j++; 
        } 
    } 
    while (i <= mid) 
    { 
        temp.push_back(c->at(i)); 
        i++; 
    } 
    while (j <= high) 
    { 
        temp.push_back(c->at(j)); 
        j++; 
    } 
    //since temp is sorted. changed c to temp 
    for(i = low; i < c->size(); i++) 
    { 
        c->insert(temp.at(i));
    }
} 
