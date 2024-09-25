// By using Brute Force Approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target, int n)
{
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int n = nums.size();

    vector<int> res = pairSum(nums, target, n);
    cout << "Pairs are: " << res[0] << " and " << res[1] << endl;
    return 0;
}