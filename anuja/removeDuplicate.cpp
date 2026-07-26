#include <iostream> 
using namespace std; 


// T.C = 0(n)
// don't think of deleting teh element 
// take advantage that array is sorted..


int main() {

    int arr[7]={1,1,2,2,2,3,3};
    int n = 7,  i=0;

        for(int j=1 ; j<n ; j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
           
        }
    for(int k=0 ; k<=i ; k++){
        cout<<arr[k]<<" ";
    }

    //  for(int k=0 ; k<n ; k++){
    //     cout<<arr[k]<<" ";
    // }

   return 0; 
}