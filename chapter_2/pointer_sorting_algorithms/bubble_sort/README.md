# Pointer-Based Bubble Sort 

## Algorithm

**'The program consists of three main functions:'**

**BubbleSortPointer(int* arr, int size):**
This function implements the Bubble Sort algorithm using pointer arithmetic instead of array indexing. It compares adjacent elements using pointers and swaps them if they are out of order. The implementation includes an optimization to stop early if no swaps occur during a pass, which helps improve performance for nearly sorted arrays.

**printArray(int* arr, int size):**
A utility function that prints the contents of the array using pointer dereferencing.

**main():**
This is the main function of the program. It initializes an example array of integers, calculates its size, prints the original array, calls the bubbleSortPointer function, and then prints the sorted array to the console.

**Usage**
Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**Compile the C++ code using:**

bash
g++ main.cpp -o main

**Run the compiled program:**

bash
./main

**Output**
The program will output:
Original array: 5 1 4 2 8; 

Sorted array: 1 2 4 5 8 
(Output may vary depending on the input array.)

**'Complexity Analysis'**
**Time Complexity**

Best	O(n)	When the array is already sorted. The loop breaks early using the swap flag.
Average	O(n²)	Each element is compared with its neighbor in multiple passes.
Worst	O(n²)	When the array is sorted in reverse; maximum comparisons and swaps occur.

**'Space Complexity'**

Auxiliary	O(1)	Sorting is done in-place using pointer swaps.
