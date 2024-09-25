#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            cout << "Target found at index: " << i << endl;
            return i; // Return the index where the target is found
        }
    }
    cout << "Target not found!" << endl;
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {4, 2, 7, 1, 8, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    int target = 8;
    
    LinearSearch(arr, size, target);

    return 0;
}
