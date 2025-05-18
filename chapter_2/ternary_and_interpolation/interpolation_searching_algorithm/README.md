# Interpolation Search in a Sorted Array
## Algorithm
**'The program consists of two main functions:'**

**• interpolationSearch(int arr[], int size, int key):**
This function takes a sorted integer array arr, its size size, and a key to search. It performs interpolation search, which estimates the likely position of the key based on its value relative to the range of the array.

It begins by setting low and high pointers to the start and end of the array.

It enters a loop that runs as long as the key is within the range defined by arr[low] and arr[high].

Inside the loop, it calculates an estimated position pos using the interpolation formula.

If the key matches the value at pos, the function returns pos (the index).

If the key is greater than arr[pos], it searches the right sub-array.

If the key is smaller than arr[pos], it searches the left sub-array.

If the loop ends without finding the key, the function returns -1.

**• printResult(int index):**
A helper function that checks the index returned by interpolationSearch. If the index is valid (not -1), it prints the location of the key. Otherwise, it prints a message that the element was not found.

**• main():**
This is the main function of the program. It initializes a sorted array of integers, calculates its size, and sets a key value to search. It then calls interpolationSearch and displays the result using printResult.

**Usage**
Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**Compile the C++ code using:**

g++ main.cpp -o main

**Run the compiled program:**

./main

**'Output'**

The program will output:

Element found at index: 6
(Note: Output may vary depending on the array and the key value.)