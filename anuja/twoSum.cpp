#include <iostream> 
#include <unordered_map>
#include <vector>
using namespace std; 
 
int main() {

    // int n = 5, sum=0, target=14;
    // int arr[n] = {2,6,5,8,11};

    // brute force: O(n^2) --SLOWWWW
    // for(int i=0 ; i<n ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         sum = arr[i]+arr[j];
    //         if(sum==target){
    //             cout << "Found at: " << i << " " << j << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "No solution found.";


    // better approach : O(n)
    // use hashing , here u simply look for the num you need to get expected output 
    // 14 = 6 + ? , u will look for this ? in the hash map 

    // Store each number and its index in a hash map.
   // For every element, calculate the number needed:
   // need = target - arr[i]
   // If 'need' already exists in the map, we've found the answer.

    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {

        int need = target - arr[i];

        if (mp.count(need)) {
            cout << "Found at: " << mp[need] << " " << i;
            return 0;
        }

      // Store: number -> index
        mp[arr[i]] = i;
    }
    cout << "No solution found.";

   return 0; 
}