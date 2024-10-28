#include <iostream>
using namespace std;

void insertAtBottom(int arr[], int &size, int maxSize, int newItem) {
    if (size >= maxSize) {
        cout << "Array is full, cannot insert new item." << endl;
        return;
    }


    arr[size] = newItem;
    size++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int maxSize = 10; 
    int arr[maxSize] = {1, 2, 3, 4, 5}; 
    int size = 5; 

    int newItem = 6; 
    insertAtBottom(arr, size, maxSize, newItem);

    cout << "Array after inserting new item at the bottom: ";
    printArray(arr, size);

    return 0;
}