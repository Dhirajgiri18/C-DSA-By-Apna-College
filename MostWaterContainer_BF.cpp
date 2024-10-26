#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int> arr, int n){
    int width,height,maxWater = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            width = j-i;
            height = min(arr[i],arr[j]) * width;
            maxWater = max(height, maxWater);
        }
    }
    return maxWater;
}
int main(){
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = arr.size();

    cout<<"Max water will be: "<<maxArea(arr,n);
    return 0;
}