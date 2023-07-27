#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    int maximum = array[0];
    int minimum = array[0];

    for (int i = 0; i < n; ++i) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }

    cout << "Maximum element: " << maximum << endl;
    cout << "Minimum element: " << minimum << endl;

    return 0;
}
