#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& arr, int n){
    int left = 0, right = n-1;
    int maxWater = 0;

    while(left<right){
        int width = right - left;
        int currWater = min(arr[left], arr[right]) * width;
        maxWater = max(currWater,maxWater);


        arr[left]<arr[right]? left ++: right--;
    }
    return maxWater;
}
int main(){
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = arr.size();

    cout<<"Max water is: "<<maxArea(arr,n);
    return 0;
}