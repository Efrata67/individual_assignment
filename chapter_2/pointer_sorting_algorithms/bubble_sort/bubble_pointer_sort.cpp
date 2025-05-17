#include <iostream>
using namespace std;

// Function to perform bubble sort using pointers
void bubbleSortPointer(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int* j = arr; j < arr + size - i - 1; j++) {
            if (*j > *(j + 1)) {
                // Swap using pointer dereferencing
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
                swapped = true;
            }
        }

        // Optimization: stop if array is already sorted
        if (!swapped) break;
    }
}

// Function to print array elements using pointers
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    bubbleSortPointer(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
