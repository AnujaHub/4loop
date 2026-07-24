#include <iostream> 
using namespace std; 

// T.C : O(n) S.C O(n)
// Optimal : Dutch National Flag Algorithm 
// to sort array of 0's 1's and 2's


// intuition of this algo :
// Divide the array into 3 parts:
// [0 ... low-1]      -> all 0's
// [low ... mid-1]    -> all 1's
// [mid ... high]     -> unsorted elements
// [high+1 ... n-1]   -> all 2's

// Traverse the array only once using three pointers:
// If arr[mid] == 0:
//      swap with low, then low++, mid++
//
// If arr[mid] == 1:
//      already in correct position, so mid++
//
// If arr[mid] == 2:
//      swap with high, then high--
//      Do NOT increment mid because the element swapped from the end
//      hasn't been processed yet.

void swap(int &a, int &b){
    int temp;
    temp = a; 
    a = b;    
    b = temp;

}

int main() {

    int n = 5 ;
    int arr[n] = {1, 0, 2, 1, 0};
    int low = 0 , mid = 0 , high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }

        else if(arr[mid]==1){
            mid++;
        }

        else{
                swap(arr[mid],arr[high]);
                high--;
        }
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }


   return 0; 
}