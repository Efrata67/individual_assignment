#include <iostream>

using namespace std;

void findSecondAndThirdLargest(int arr[], int size, int &secondLargest, int &thirdLargest) {
    // Check for invalid input (array too small)
    if (size < 3) {
        cout << "Error: Array size must be at least 3 to find second and third largest." << endl;
        secondLargest = -2147483648; // Smallest possible int.
        thirdLargest = -2147483648; // Smallest possible int.
        return;
    }

    int largest = arr[0];
    secondLargest = -2147483648; // Initialize to smallest possible int.
    thirdLargest = -2147483648;  // Initialize to smallest possible int.


    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            // New largest found, shift previous largest and second largest
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            // New second largest found
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest && arr[i] != secondLargest && arr[i] != largest) {
            // New third largest found
            thirdLargest = arr[i];
        }
    }
}

int main() {
    int secondLargest, thirdLargest;
    int smallArray[] = {1, 2, 6, 8, 4};
    int smallSize = sizeof(smallArray) / sizeof(smallArray[0]);
    findSecondAndThirdLargest(smallArray, smallSize, secondLargest, thirdLargest); 
     if (secondLargest != -2147483648 && thirdLargest != -2147483648) {
        cout << "The second largest number in the array is: " << secondLargest << endl;
        cout << "The third largest number in the array is: " << thirdLargest << endl;
    }

    return 0;
}