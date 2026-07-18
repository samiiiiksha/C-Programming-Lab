# Dynamic Array Operations in C

## Objective

To build a C program that performs operations such as inserting, displaying, updating, deleting, searching, and sorting elements in a dynamic array.
## Problem Statement

Develop a program that:
- Inserts new elements into the array.
- Displays all elements.
- Updates an existing element.
- Deletes an element.
- Searches for an element using Linear Search.
- Sorts the array in ascending order.
- Searches for an element using Binary Search.
- Stores all elements in an array.

## Algorithm

1. Create an array to store integer elements.
2. Display a menu with different operations.
3. If the user selects Insert:
   - Read the element.
   - Store it in the next available position.
4. If the user selects Display:
   - Display all array elements.
5. If the user selects Update:
   - Read the position.
   - Replace the element with a new value.
6. If the user selects Delete:
   - Read the position.
   - Remove the element by shifting the remaining elements.
7. If the user selects Linear Search:
   - Read the element to search.
   - Search the array sequentially.
8. If the user selects Sort:
   - Sort the array in ascending order.
9. If the user selects Binary Search:
   - Read the element to search.
   - Search the sorted array using Binary Search.
10. Repeat the menu until the user chooses Exit.

## Time Complexity

| Operation | Time Complexity |
| Insert Element | O(1) |
| Display Elements | O(n) |
| Update Element | O(1) |
| Delete Element | O(n) |
| Linear Search | O(n) |
| Sort Array | O(n²) |
| Binary Search | O(log n) |

## Space Complexity

O(n) space is used to store the array elements.

## Sample Input

```
1
10

1
20

1
30

2

6

7
30
```

## Sample Output

```
Element Inserted Successfully!!
Element Inserted Successfully!!
Element Inserted Successfully!!

Array Elements : 10 20 30

Array Sorted Successfully!!

Element Found at Position 3
```

## Learning Outcome

This program helped in understanding dynamic array operations, searching techniques, Bubble Sort, Linear Search, Binary Search in C.