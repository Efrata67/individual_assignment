#include <iostream>
using namespace std;

// Function to perform ternary search on a sorted array
int ternarySearch(int arr[], int left, int right, int key) {
    if (right >= left) {
        // First and second midpoints
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        // Check if key is at any mid
        if (arr[mid1] == key)
            return mid1;
        if (arr[mid2] == key)
            return mid2;

        // If key is in left third
        if (key < arr[mid1])
            return ternarySearch(arr, left, mid1 - 1, key);

        // If key is in right third
        else if (key > arr[mid2])
            return ternarySearch(arr, mid2 + 1, right, key);

        // If key is in middle third
        else
            return ternarySearch(arr, mid1 + 1, mid2 - 1, key);
    }

    // Key not found
    return -1;
}

// Function to print the result
void printResult(int index) {
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
}

// Main function
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15, 18, 21, 24};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int result = ternarySearch(arr, 0, size - 1, key);
    printResult(result);

    return 0;
}
