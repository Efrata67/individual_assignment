#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    // Checks if the array is empty
    if (size <= 0) {
        cout << "Error: Array is empty or has invalid size." << endl;
        return -1; 
    }

    int minNumber = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < size; i++) {
        if (arr[i] < minNumber) {
            minNumber = arr[i]; // Update min if a smaller number is found
        }
    }
    return minNumber;
};

int main() {
    int arr[] = {120, 45, 67, 89, 34, 23, 90, 11};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int smallest = findSmallest(arr, size);
    if (smallest != -1) {  // Check if findSmallest returned an error value
        cout << "The smallest number in the array is: " << smallest << endl;
    }


    return 0;
}

