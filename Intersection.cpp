#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {4, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Intersection of two arrays: "<<endl;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]==brr[j]){
                cout<<brr[j]<<" ";
                break;
            }
        }
    }

    return 0;
}