# Find Second and Third Largest Numbers in an Array

## Algorithm

The program consists of two main functions:

 **'findSecondAndThirdLargest':** (int arr[], int size, int &secondLargest, int &thirdLargest):
This function takes an integer array arr, its size size, and two reference variables secondLargest and thirdLargest. It iterates through the array to determine the second and third largest distinct elements.
If the array has fewer than three elements, it prints an error message and sets both secondLargest and thirdLargest to the smallest possible int value (-2147483648) to indicate invalid results.
Otherwise, it updates and returns the appropriate values through the reference parameters.

**'main():'**
This is the main function of the program. It initializes an example array of integers, calculates its size, and calls the findSecondAndThirdLargest function.
It then checks if valid results were returned and prints the second and third largest values to the console.

**'Usage:'**
Clone the repository to your local machine.

Open the terminal and navigate to the repository directory.

**'Compile the C++ code using:'**

bash
Copy
Edit
g++ main.cpp -o main
**'Run the compiled program:'** ./main

## Output

**'The program will output:'**

The second largest number in the array is: 6
The third largest number in the array is: 4
(Note: Output may vary depending on the input array.)

**'Error Handling:'**
If the array has fewer than 3 elements or not enough distinct values, the program will output:
Error: Array size must be at least 3 to find second and third largest.