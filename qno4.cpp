#include <iostream>
using namespace std;
int main() {
    const int MAX_SIZE = 100;  
    int arr[MAX_SIZE];        
    int n;                     
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int newItem, loc;
    cout << "Enter the new item to insert: ";
    cin >> newItem;
    cout << "Enter the location (0 to " << n << ") to insert the new item: ";
    cin >> loc;
    if (loc < 0 || loc > n) {
        cout << "Invalid location!" << endl;
        return 1;
    }
    for (int i = n; i > loc; i--) {
        arr[i] = arr[i - 1];
    }

    arr[loc] = newItem;
    n++;
    cout << "Array elements after insertion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}