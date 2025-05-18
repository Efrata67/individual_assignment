# Ternary Search in a Sorted Array
## Algorithm
**'The program consists of two main functions:'**

**• ternarySearch(int arr[], int left, int right, int key):**
This function performs a recursive ternary search on a sorted integer array arr. It takes the search boundaries left and right, and the key to find.

It calculates two midpoints: mid1 and mid2 by dividing the current range into three parts.

If the key is found at either midpoint, it returns the index.

If the key is less than arr[mid1], it recursively searches the left segment.

If the key is greater than arr[mid2], it searches the right segment.

Otherwise, it searches the middle segment.

If the key is not found, it returns -1.

**• printResult(int index):**
A helper function that prints whether the key was found and at which index, or indicates that it was not found.

**• main():**
This is the main function of the program. It initializes a sorted example array of integers, calculates its size, sets a search key, calls the ternarySearch function, and prints the result using printResult.

**'Usage'**
Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**Compile the C++ code using:**

g++ main.cpp -o main

**Run the compiled program:**

./main

**Output**
The program will output:

Element found at index: 6
(Note: Output may vary depending on the key value in the program.)