#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the target is found
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        cout << "The number " << target << " is found at index " << index <<endl;
    } else {
        cout << "The number " << target << " is not found in the array." <<endl;
    }

    return 0;
}
