#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int> nums)
{
    vector <int> sol;
    for(int i = 0; i < nums.size(); i++) {
        int product = 1;
        for (int j = 0; j < nums.size(); j++) {
            if (j == i) continue;
            product *= nums[j];
        }
        sol.push_back(product);
    }
    cout<<"solution \n";
    for (int x : sol) {
        cout << x<<" ";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int &x : nums)
        cin >> x;

    solve(nums);


    return 0;
}