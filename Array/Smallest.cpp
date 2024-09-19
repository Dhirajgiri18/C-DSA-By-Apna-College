#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {3, 98, 4 ,9 ,2, 44, 66};
    int size = sizeof(arr);
    int smallest = INT_MAX;

    for(int i=1; i<size; i++){
        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }
    cout<<"The smallest element in the array is: "<<smallest<<endl;

    return 0;
}