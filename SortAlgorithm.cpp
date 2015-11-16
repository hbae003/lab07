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
    vector<int> temp;
    for (int i = 0; i < c->size(); i++)
    {
        temp.push_back(c->at(i));
    }
    c->erase();
    merge_sort(temp, 0, (temp.size() - 1));    
     
    for (unsigned i = 0; i < temp.size(); i++)
    {
       c->insert(temp.at(i));
    }
}  
 
void MergeSort::merge_sort(vector<int> &c, int low, int high) 
{ 
    int mid; 
    if(low < high) 
    { 
        mid = (low + high) / 2; 
        merge_sort (c, low, mid); 
        merge_sort (c, mid + 1, high); 
        merge (c, low, mid, high); 
    }
    return; 
} 
 
void MergeSort::merge(vector<int> &c, int low, int mid, int high) 
{ 
    int i = low; 
    int j = mid + 1;   
    vector<int> temp; 
    while (i <= mid && j <= high) 
    { 
        if (c.at(i) <= c.at(j)) 
        { 
            temp.push_back(c.at(i)); 
            i++; 
        } 
        else 
        { 
            temp.push_back(c.at(j)); 
            j++; 
        } 
    } 
    while (i <= mid) 
    { 
        temp.push_back(c.at(i)); 
        i++; 
    } 
    while (j <= high) 
    { 
        temp.push_back(c.at(j)); 
        j++; 
    } 

    j = 0;
    //since temp is sorted. changed c to temp 
    for(i = low; i <= high; i++) 
    { 
        c.at(i) = temp.at(j); 
        j++;
    }
} 
