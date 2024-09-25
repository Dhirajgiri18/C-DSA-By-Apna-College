// By using Two pointer Approach
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target, int n){
    vector<int> ans;
    int start = 0;
    int end = n-1;

    while(start<end){
        int sum = nums[start] + nums[end];
        if(sum == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }else if(sum>target) end--;
        else start++;
    }
    return ans;
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int n = nums.size();
    int target = 9;

    vector<int> ans = pairSum(nums, target, n);
    cout<<"Pairs are: "<<ans[0]<<" and "<<ans[1]<<endl;
    return 0;
}