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