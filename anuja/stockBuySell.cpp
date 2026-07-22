#include <iostream> 
using namespace std; 
 
// T.C : O(n)
// Intuition:
// Maintain the minimum stock price seen so far.
// For each day, calculate the profit if the stock is sold today.
// Update the maximum profit whenever a better profit is found.

// Tip:
// Make a table with:
// Price | Min Price | Current Profit | Max Profit
// to understand how the algorithm works.

int main() {

    int n = 6;
    int arr[n] = {7,1,5,3,6,4};

    int min_price = arr[0];
    int max_profit = 0 , profit=0;
    

    for(int i=0 ; i<n ; i++){
        if(arr[i]<min_price){
             min_price=arr[i];
             }
        profit = arr[i] - min_price;  
        if(profit>max_profit){
            max_profit = profit;
        }
    }

    cout<<max_profit;
    return 0;

    }


// Mistake I made initially:
// I got stuck trying to manage buying and selling indices.
// That's unnecessary—tracking only the minimum price seen so far is enough.
// Since we process the array from left to right, we can never sell before buying.