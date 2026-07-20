#include <iostream> 
using namespace std; 

// T.C = O(n^2)

// intuition : 
// divide pattern into two halves
// to print star space star
// first half:
// print (n-i) stars
// print (+2) spaces
// print (n-i) stars
// second half:
// print (i+1) stars
// print (-2) spaces
// print (i+1) stars


int main() {

    int n=5;

    for(int i=0 ; i<n ; i++){
        int spc = 2*i;
        for(int j=1 ; j<=n-i ; j++){
            cout<<"*";
        }
        for(int j=0 ; j<spc ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=n-i ; j++){
            cout<<"*";
        }

        cout<<endl;
    }



    for(int i=0 ; i<n ; i++){
        
        int spc = 2*(n-i-1);
       
        for(int j=1 ; j<=i+1 ; j++){
            cout<<"*";
        }
        for(int j=0 ; j<spc ; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=i+1 ; j++){
            cout<<"*";
        }

        cout<<endl;
    }

   return 0; 
}


