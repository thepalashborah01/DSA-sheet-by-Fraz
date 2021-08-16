#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &nums, int target)
{
    int len = nums.size();
    unordered_map<int, int> m;
    for (int i = 0; i < len; i++)
    {
        int x = nums[i];
        int y = target - x;
        if (m.find(y) != m.end())
        {
            cout<<i<<","<<m[y];
            return ;
        }
        m[nums[i]] = i;
    }
    return ;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int target;
    cin >> target;

    twoSum(nums, target);
    
    return 0;
}