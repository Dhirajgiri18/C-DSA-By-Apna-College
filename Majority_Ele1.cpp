// By using brute force approach
#include <iostream>
#include <vector>
using namespace std;

int Maj(vector<int> nums)
{
    int n = nums.size();

    for (int val : nums)
    {
        int count = 0;
        for (int ele : nums)
        {
            if (val == ele)
            {
                count++;
            }
        }
        if (count >= n / 2)
        {
            return val;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};

    int major = Maj(nums);
    cout << "The majority element is: " << major << endl;

    return 1;
}