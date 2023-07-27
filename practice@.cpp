#include <bits/stdc++.h>
using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Move to the next elements
        start++;
        end--;
    }
}
int main() {
    int size;
    cout << "enter the Size of the array: ";
    cin >> size;
    int arr[size];
    cout<< "enter the elements of the array: ";
    for (int i = 0; i < size; i++) 
    cin >> arr[i] >>" ";

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
    }

    // Reverse the array
    reverseArray(arr, size);

    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
    }

    return 0;
}