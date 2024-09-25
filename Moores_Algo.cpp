// Find the majority element using Moore's Voting Algorithm
#include <iostream>
#include <vector>
using namespace std;

int Majority_Ele(vector<int> &nums)
{
    int n = nums.size(), count = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
            count++;
        else
            count--;
    }
    count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > n / 2)
        return ans;
    else
        return -1;
}
int main()
{
    vector<int> nums = {2, 2, 3, 1, 2, 2};

    int ans = Majority_Ele(nums);
    cout << "Majority element is: " << ans << endl;

    return 0;
}