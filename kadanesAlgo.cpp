#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] ={3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;
    int curr =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        curr += arr[i];
        maxSum = max(curr, maxSum);
        if(curr<0 ){
            curr = 0;
        }
    }
    cout<<"Maximum sum is: "<<maxSum<<endl;
    return 0;
}