#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int> nums, int target)
{
    unordered_map<int,int> map;
    int num;

    for (int i = 0; i < nums.size(); i++) {

        num = target - nums[i];

        auto it = map.find(num);
         /*find                             count
         Points to first matching element	Returns total number of matching keys */
        if(it != map.end()) {
            cout<< "first " << i << " second " << it->second;
            return;
        }

        map[nums[i]] = i;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n >> target;

    vector<int> nums(n);

    for (int &x : nums)
        cin >> x;

    solve(nums, target);


    return 0;
}