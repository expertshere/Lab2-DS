#include <iostream>
using namespace std;

void insertAtTop(int arr[], int &size, int maxSize, int newItem) {
    if (size >= maxSize) {
        cout << "Array is full, cannot insert new item." << endl;
        return;
    }
    
    // Shift elements one position down
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert new item at the top
    arr[0] = newItem;
    size++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int maxSize = 10; // Maximum size of the array
    int arr[maxSize] = {1, 2, 3, 4, 5}; // Initial elements
    int size = 5; // Current number of elements in the array
    
    int newItem = 0; // Item to be inserted at the top
    insertAtTop(arr, size, maxSize, newItem);
    
    cout << "Array after inserting new item at the top: ";
    printArray(arr, size);
    
    return 0;
}