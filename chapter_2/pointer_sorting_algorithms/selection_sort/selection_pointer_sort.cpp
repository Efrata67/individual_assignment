#include <iostream>
using namespace std;

// Function to perform selection sort using pointers
void selectionSortPointer(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int* minPtr = arr + i;  // Assume current is minimum

        // Find the pointer to the minimum element in the remaining array
        for (int* j = arr + i + 1; j < arr + size; j++) {
            if (*j < *minPtr) {
                minPtr = j;
            }
        }

        // Swap values using pointers
        if (minPtr != arr + i) {
            int temp = *(arr + i);
            *(arr + i) = *minPtr;
            *minPtr = temp;
        }
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
    int arr[] = {29, 10, 14, 37, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    selectionSortPointer(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
