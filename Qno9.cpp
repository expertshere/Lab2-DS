#include <iostream>
using namespace std;

int main() {
    int arr[100], n, index, newValue;

    // Input the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the index and new value
    cout << "Enter the index to update: ";
    cin >> index;
    cout << "Enter the new value: ";
    cin >> newValue;

    if (index >= 0 && index < n) {
        arr[index] = newValue;

        // Print all elements of the array
        cout << "Array after updating:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    return 0;
}