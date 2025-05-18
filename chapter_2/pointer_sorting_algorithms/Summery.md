# Summery
All three algorithms are O(n²) in average and worst-case performance, making them unsuitable for large datasets.

Insertion Sort performs best among the three for nearly sorted arrays, thanks to fewer comparisons and shifts.

Bubble Sort, with the swap flag optimization, slightly improves performance on sorted data but still makes unnecessary comparisons.

Selection Sort is the most predictable but offers no performance advantage and makes unnecessary comparisons regardless of data order.

All are in-place (O(1) auxiliary space), which is efficient in terms of memory.

Using pointers instead of array indexing doesn't improve complexity but can be a good learning exercise for understanding memory access and pointer manipulation in C++.