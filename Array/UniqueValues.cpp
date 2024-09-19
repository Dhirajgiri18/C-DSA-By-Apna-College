#include <iostream>
using namespace std;

void unique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 1, 36, 4, 52, 6, 7, 9, 2, 14, 3, 1, 1, 5, 41, 2, 64, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    unique(arr, size);

    return 0;
}
