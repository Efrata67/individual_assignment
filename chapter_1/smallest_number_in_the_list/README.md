# Find Smallest number in an Array

## Algorithm

The program consists of two main functions:

•   **`findSmallest(int arr[], int size)`:** This function takes an integer array `arr` and its size `size` as input. It iterates through the array and determines the smallest element. If the input array is empty, it prints an error message to the console and returns -1 to signal an error.  Otherwise, it returns the smallest number found.

•   **`main()`:** This is the main function of the program. It initializes an example array of integers, calculates its size, calls the `findSmallest` function, and prints the result to the console. It also includes basic error handling to check for an error return from `findSmallest` before printing the result.
## usage 
1. Clone the repository to your local machine. 
2. Open the terminal and navigate to the repository directory. 
3. Compile the C++ code using: 
   ```bash 
   g++ main.cpp -o main 
   Run the compiled program: ./main 
Output 
The program will output: 
The smallest number in the array is: 11 