# LeetCode Array Challenge in C

## Objective

To build a C program that performs common array operations such as finding the largest, second largest, smallest, second smallest elements, reversing the array, removing duplicates, counting frequency, searching, and sorting.

## Problem Statement

Develop a program that:
- Accepts array elements from the user.
- Displays all array elements.
- Finds the largest and second largest elements.
- Finds the smallest and second smallest elements.
- Reverses the array.
- Removes duplicate elements.
- Counts the frequency of each element.
- Searches for an element using Linear Search.
- Sorts the array in ascending order.

## Algorithm

1. Create an array to store integer elements.
2. Display a menu with different operations.
3. If the user selects Enter Array:
   - Read the number of elements.
   - Store the elements in the array.
4. If the user selects Display:
   - Display all array elements.
5. If the user selects Largest:
   - Traverse the array and find the largest element.
6. If the user selects Second Largest:
   - Traverse the array and find the second largest element.
7. If the user selects Smallest:
   - Traverse the array and find the smallest element.
8. If the user selects Second Smallest:
   - Traverse the array and find the second smallest element.
9. If the user selects Reverse:
   - Reverse the array by swapping elements.
10. If the user selects Remove Duplicates:
    - Remove duplicate elements by shifting the remaining elements.
11. If the user selects Count Frequency:
    - Count and display the frequency of each element.
12. If the user selects Linear Search:
    - Search for the given element in the array.
13. If the user selects Sort:
    - Sort the array in ascending order using Bubble Sort.
14. Repeat the menu until the user chooses Exit.

## Time Complexity

| Operation | Time Complexity |
| Enter Array | O(n) |
| Display Array | O(n) |
| Find Largest | O(n) |
| Find Second Largest | O(n) |
| Find Smallest | O(n) |
| Find Second Smallest | O(n) |
| Reverse Array | O(n) |
| Remove Duplicates | O(n²) |
| Count Frequency | O(n²) |
| Linear Search | O(n) |
| Sort Array | O(n²) |

## Space Complexity

O(n) space is used to store the array elements.

## Sample Input

```
5
10
20
10
30
20
```

```
1
2
3
4
5
6
7
8
9
10
20
11
12
```

## Sample Output

```
Array Entered Successfully!!

Array Elements : 10 20 10 30 20

Largest Element : 30
Second Largest Element : 20
Smallest Element : 10
Second Smallest Element : 20

Array Reversed Successfully!!

Duplicates Removed Successfully!!

10 occurs 2 times
20 occurs 2 times
30 occurs 1 times

Element Found at Position 2

Array Sorted Successfully!!

Program Ended!!
```

## Learning Outcome

This program helped in understanding array traversal, searching, sorting, reversing arrays, removing duplicate elements, counting frequencies, and implementing multiple array-based algorithms using functions in C.