#include <iostream> 
using namespace std; 
 

//T.C : O(n^2)
//brute force , count start from 1 since 1st occurence alreday checked 
//needs optimization


int main() {

    int arr[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 
   
    for(int i=0 ; i<n; i++){
        int count = 1;  
        for(int j=i+1 ; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > n/2){
                cout<<arr[i];
                return 0;
            }
    }

   return 0; 
}