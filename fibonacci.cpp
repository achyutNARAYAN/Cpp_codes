#include <iostream>
#include <climits>

void findMaxMin1D(int arr[], int size, int& maxElement, int& maxIndex, int& minElement, int& minIndex) {
    maxElement = INT_MIN;
    minElement = INT_MAX;
    maxIndex = -1;
    minIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }
}

int main() {
    int arr[] = 
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement, maxIndex, minElement, minIndex;
    findMaxMin1D(arr, size, maxElement, maxIndex, minElement, minIndex);

    std::cout << "Maximum Element: " << maxElement << ", Index: " << maxIndex << std::endl;
    std::cout << "Minimum Element: " << minElement << ", Index: " << minIndex << std::endl;

    return 0;
}

