# Basic Data sturctures and Algorithms
- [x] [Linear search](#1--linear-search)
- [x] [Binary Search](#2--binary-search)
- [ ] Bubble sort 
- [ ] Selection sort

## 1 . Linear Search
> Most Simple type of searching
### algorithm
``` 
step 0 : Start
step 1 : Accept N as number of elements
step 2 : Accept N elements into Array[N]
step 3 : Accept ITEM as variable to be searched 
step 4 : Set LOS = -1 
step 5 : Repeat step 6 for every elements in array
step 6 : Check if element = ITEM 
         if yes set LOS = position of element 
         if no continue to next element 
step 7 : if LOS = -1 print "element not found"
         else print "element found at LOS+1"
```

### Code 
```cpp
#include <iostream>
#define SIZE 1000
using namespace std;
int main(){
    int arr[SIZE] , N , LOS = -1 , ITEM ;
    cin>>N;
    for (int i=0 ; i<N ; i++){
        cin>>arr[i];
    }
    cin>>ITEM;
    for (int i=0 ; i<N ; i++){
        if(arr[i] == ITEM){
            LOS = i;
            break;
        }
    }
    if(LOS == -1)
        cout<<"Entry Not found";
    else
        cout<<"Found at position "<<LOS+1;
    
    return 0;
}
```

## 2 . Binary Search
>used when there are many elements in array , splits array in half and searches . Array should be sorted for this method to work 

### algorithm
```
step 0 : Start
step 1 : Accept N as number of elements in array
step 2 : Accept N elements into array ARRAY[N]
step 3 : Accept ITEM as variable to be searched 
step 4 : Store the possition of first elements in the ARRAY in FIRST and last element in LAST
step 5 : Repeat step 6 to 10 while(FIRST<=LAST)
step 6 : Find the middle possition (FIRST+LAST)/2 and store the value in MIDDLE
step 7 : Compare ITEM with MIDDLE
step 8 : If ARRAY[MIDDLE] = ITEM Display the possition and go to step 11
step 9 : if ARRAY[MIDDLE] > ITEM set LAST = MIDDLE-1
step 10: if ARRAY[MIDDLE] > ITEM set FIRST = MIDDLE + 1
step 11: End
```
### Code
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N , ARRAY[1000] , ITEM , FIRST , LAST , MIDDLE , LOC = -1;
    cin>>N;
    for(int i=0 ; i<N ; i++){
        cin>>ARRAY[i];
    }
    
    // For sorting array
    int len = N/sizeof(ARRAY[0]);
    sort(ARRAY , ARRAY + len);
    // Array Sorted 

    cin>>ITEM;
    FIRST = 0;
    LAST = N-1;
    
    while (FIRST<=LAST)
    {
        MIDDLE = (FIRST+LAST)/2 ;
        if (ARRAY[MIDDLE] == ITEM){
            LOC = MIDDLE ;
            break;
        }
        else if(ARRAY[MIDDLE] > ITEM){
            LAST = MIDDLE -1 ;
        }
        else if (ARRAY[MIDDLE] < ITEM)
        {
            FIRST = MIDDLE+1 ;
        }
        
    }

    if (LOC == -1){
        cout<<"Item not found in array";
    }
    else{
        cout<<"Item found at "<<LOC+1;
    }
    
    return 0;
}
```

