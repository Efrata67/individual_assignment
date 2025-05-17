# Pointer-Based Selection Sort

## Algorithm

**'The program consists of three main functions:'**

**selectionSortPointer(int* arr, int size):**
This function implements the Selection Sort algorithm using pointer arithmetic instead of array indexing. It iterates through the array and, for each element, finds the smallest element in the unsorted portion of the array and swaps it into place using pointers.

**printArray(int* arr, int size):**
A helper function that prints the contents of the array using pointer dereferencing.

**main():**
This is the main function of the program. It initializes an example array of integers, calculates its size, prints the original array, calls the selectionSortPointer function to sort the array, and then prints the sorted result to the console.

**Usage**
Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**Compile the C++ code using:**

bash
g++ main.cpp -o 

**Run the compiled program:**

bash
./main

**Output**
The program will output:

Original array: 29 10 14 37 13;  
Sorted array: 10 13 14 29 37 
(Output may vary depending on the input array.)

## Complexity Analysis
**Time Complexity**

Best	O(n²)	Selection sort performs the same number of comparisons regardless of input.
Average	O(n²)	Every element is compared with all remaining elements.
Worst	O(n²)	Maximum number of comparisons and swaps in reverse order.

**Space Complexity**

Auxiliary	O(1)	Sorting is done in-place using pointer swaps.
