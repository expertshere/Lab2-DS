#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

   
    cout << "Enter the number of elements in the array: ";
    cin >> n;


    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Deleting item from the top (index 0)
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Decrement the size of the array

    // Print all elements of the array
    cout << "Array after deleting the top element:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}