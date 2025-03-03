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

}