#include <iostream>
using namespace std;

// Function for iterative binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore left half
        else if (arr[mid] < target)
            low = mid + 1;

        // If target is smaller, ignore right half
        else
            high = mid - 1;
    }

    // Target was not found
    return -1;
}

int main() {
    int arr[] = {2, 4, 10, 20, 40, 60, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
