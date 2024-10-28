#include <iostream>
using namespace std;

int main() {
    int arr[100], n, loc;

    // Input the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the location to delete
    cout << "Enter the location (index) to delete the item: ";
    cin >> loc;

    if (loc < 0 || loc >= n) {
        cout << "Invalid location!" << endl;
        return 1;
    }

    // Shift elements to the left from loc
    for (int i = loc; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Decrement the size of the array

    // Print all elements of the array
    cout << "Array after deletion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}