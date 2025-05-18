# Binary Search in a Sorted Array (Iterative Approach)

## Algorithm
**The program consists of two main functions:**

**• binarySearch(int arr[], int size, int target):**  
This function performs an **iterative binary search** on a sorted integer array `arr`. It takes the size of the array and the `target` value to find.  

It initializes two pointers, `low` and `high`, representing the search boundaries. In each iteration:
- It calculates the midpoint using `mid = low + (high - low) / 2`.
- If the target is equal to the middle element, it returns the index.
- If the target is greater than the middle element, it shifts the `low` boundary to `mid + 1`.
- If the target is smaller, it shifts the `high` boundary to `mid - 1`.

If the target is not found, it returns `-1`.

**• main():**  
This is the main function of the program. It initializes a sorted example array of integers, calculates its size, takes input from the user for the target value, calls the `binarySearch` function, and prints the result based on the returned index.

## Usage

Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**Compile the C++ code using:**

g++ main.cpp -o main

**Run the compiled program:**

./main

**Output**

The program will prompt:
Enter the number to search:
After entering a number, it will output:

Element found at index: 3
or

Element not found in the array
(Note: Output may vary depending on the user input and array contents.)