# Pointer-Based Insertion Sort

## Algorithm

**'The program consists of three main functions:'**

**'insertionSortPointer(int* arr, int size):**
This function implements the Insertion Sort algorithm using pointer arithmetic rather than array indexing.
It iterates through the array, and for each element, shifts larger preceding elements forward to insert the current element into its correct sorted position.

**'printArray(int* arr, int size):'**
A utility function to print the contents of the array using pointer notation.

**'main():'**
Initializes an example array of integers, calculates its size, prints the original array, sorts the array using insertionSortPointer, and then prints the sorted result.

**'Usage'**
Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**'Compile the C++ code using:'**
bash
g++ main.cpp -o main

**'Run the compiled program:'**
bash
./main

**'Output'**
The program will output:
Original array: 9 4 6 2 7 1 ;
Sorted array: 1 2 4 6 7 9 
(Output may vary depending on the input array.)

## Complexity Analysis
Time Complexity

Best	   O(n)	          Array is already sorted. Only one comparison per element.
Average	   O(n²)	      Elements are in random order; each insert may require multiple shifts.
Worst	   O(n²)	      Array is sorted in reverse order; all previous elements must be shifted.

## Space Complexity

Auxiliary	      O(1)	    Sorting is performed in-place using pointers.
