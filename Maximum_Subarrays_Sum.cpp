#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int maxSum = INT_MIN;

    for(int i=0; i<sz; i++){
        int curSum = 0;
        for(int j=i; j<sz; j++){
            curSum += arr[j];
            maxSum = max(curSum,maxSum);
        }
    }
    cout<<"Maximum sum is: "<<maxSum<<endl;
    
    return 0;
} 