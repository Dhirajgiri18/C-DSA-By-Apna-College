#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(vector<int> &nums)
{
    int size = nums.size();
    vector<int> ans(size);

    for (int i = 0; i < size; i++)
    {
        int prod = 1;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                prod *= nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> ans = arr(nums);
    for (int ele : ans)
    {
        cout << ele << " ";
    }
    return 0;
}