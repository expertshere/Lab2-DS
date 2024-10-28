#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, index, value, found = -1;

    // Input the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Choice to search by index or value
    cout << "Search by (1) Index or (2) Value: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the index: ";
        cin >> index;
        if (index >= 0 && index < n) {
            cout << "Element at index " << index << " is " << arr[index] << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    } else if (choice == 2) {
        cout << "Enter the value to search: ";
        cin >> value;
        for (int i = 0; i < n; i++) {
            if (arr[i] == value) {
                found = i;
                break;
            }
        }
        if (found != -1) {
            cout << "Value found at index " << found << endl;
        } else {
            cout << "Value not found in the array." << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}