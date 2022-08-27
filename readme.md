# Basic Data sturctures and Algorithms
- [x] Linear search
- [ ] Binary Search
- [ ] Bubble sort 
- [ ] sort

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
