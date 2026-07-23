#include <bits/stdc++.h>
using namespace std;

#define ll long long

std::vector<int> solve(vector<int> nums, int target)
{
    vector<int> sol(2, 0);

    // actual solving part

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                sol[0] = i;
                sol[1] = j;

                return sol;
            }
        }
    }
    return sol;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n >> target;

    vector<int> nums(n);

    for (int &x : nums) cin >> x;


    vector<int> sol = solve(nums, target);

    cout << "solution " << sol[0] << " " << sol[1] << "\n";

    return 0;
}