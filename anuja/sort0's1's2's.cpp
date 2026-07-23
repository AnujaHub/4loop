#include <iostream> 
using namespace std; 
 

// brute force : use any sorting technique , ah that's very basic :)

// better : count no of 0's , 1's and 2's 
// run the respective loops n times
// T.C = O(2n) 

// TRY - optimal : DUTCH NATIONAL FLAG ALGO
// PENIDNGGG


int main() {

    int n = 5 ;
    int arr[n] = {1, 0, 2, 1, 0};
    int count0=0 , count1=0 , count2=0;

    for(int i=0 ; i<n ; i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }

    for(int i=0 ; i<count0 ; i++){
        arr[i]=0;
    }
     for(int i= count0 ; i<count1+count0 ; i++){
        arr[i]=1;
    }
     for(int i= count1+count0; i<n ; i++){
        arr[i]=2;
    }

     for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

   return 0; 
}