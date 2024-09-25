#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int count =0;

    for(int i=0; i<sz; i++){
        for(int j=i; j<sz; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k];
            }
            cout<<" ";
            count++;
        }
    cout<<endl;
    }
    cout<<"Total subarrays are: "<<count<<endl;

    return 0;
}