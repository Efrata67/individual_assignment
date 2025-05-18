# Binary Search in a Sorted Array (Recursive Approach)

## Algorithm

**'The program consists of two main functions:'**

**• binarySearch(int arr[], int low, int high, int target):**  
This function performs a **recursive binary search** on a sorted integer array `arr`. It takes the search boundaries `low` and `high`, and the `target` value to find.

It calculates the midpoint `mid` using `(low + high) / 2`.

If the target is found at `arr[mid]`, it returns the index.

If the target is less than `arr[mid]`, it recursively searches the **left half** of the array.

If the target is greater than `arr[mid]`, it recursively searches the **right half** of the array.

If the `low` index exceeds `high`, the function returns `-1` indicating the target is not found.

**• main():**  
This is the main function of the program. It initializes a sorted example array of integers, calculates its size, accepts a search key as input from the user, calls the `binarySearch` function, and prints whether the target was found or not, along with its index.

**'Usage'**  
Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**Compile the C++ code using:**

g++ main.cpp -o main

Run the compiled program:

./main

**Output**
The program will prompt:

Enter the number to search:
After entering a number, it will output:
Element found at index: 4
or

Element not found in the array
(Note: Output may vary depending on the key value entered during program execution.)
