#include <iostream>
using namespace std;

// Function to perform insertion sort using pointers
void insertionSortPointer(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = *(arr + i);
        int* j = arr + i - 1;

        // Shift elements using pointers
        while (j >= arr && *j > key) {
            *(j + 1) = *j;
            j--;
        }

        *(j + 1) = key;
    }
}

// Function to print array elements
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int arr[] = {9, 4, 6, 2, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    insertionSortPointer(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}

