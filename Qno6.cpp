#include <iostream>
using namespace std;

int main() {
    int arr[10], n;

    // Input the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Deleting item from the bottom
    n--;  // Just reduce the size by 1

    // Print all elements of the array
    cout << "Array after deleting the bottom element:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}