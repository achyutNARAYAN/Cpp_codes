#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the number of rows in the 2D array: ";
    cin >> rows;
    cout << "Enter the number of columns in the 2D array: ";
    cin >> columns;

    int array[rows][columns];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    int maximum = array[0][0];
    int minimum = array[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (array[i][j] > maximum) {
                maximum = array[i][j];
            }
            if (array[i][j] < minimum) {
                minimum = array[i][j];
            }
        }
    }
    cout << "Maximum element: " << maximum << endl;
    cout << "Minimum element: " << minimum << endl;

    return 0;
}
