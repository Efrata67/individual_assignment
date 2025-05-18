#include <iostream>
using namespace std;

// Function to perform Interpolation Search on a sorted array
int interpolationSearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high && key >= arr[low] && key <= arr[high]) {
        // Avoid division by zero
        if (arr[low] == arr[high]) {
            if (arr[low] == key)
                return low;
            else
                return -1;
        }

        // Estimate the position using interpolation formula
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]);

        // Check if key is found
        if (arr[pos] == key)
            return pos;

        // If key is larger, key is in upper part
        if (arr[pos] < key)
            low = pos + 1;

        // If key is smaller, key is in lower part
        else
            high = pos - 1;
    }

    return -1; // Key not found
}

// Function to print search result
void printResult(int index) {
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
}

// Main function
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 70;

    int result = interpolationSearch(arr, size, key);
    printResult(result);

    return 0;
}
