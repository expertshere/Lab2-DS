#include <iostream>
using namespace std;

int main() {
    int arr1[100], arr2[100], result[100], n;

    // Input the number of elements
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    // Input elements of the first array
    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Input elements of the second array
    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Adding the two arrays element by element
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    // Print the result array
    cout << "Resultant array after addition:" << endl;
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}