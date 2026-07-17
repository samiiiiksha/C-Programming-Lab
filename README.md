# Dynamic Array Management

## Objective
To build a C program that dynamically allocates memory for storing student marks using`malloc(), displays the marks, calculates basic statistics, and releases the allocated memory using free().

## Problem Statement
Develop a program that:
- Dynamically allocates memory for storing student marks.
- Accepts marks from the user.
- Displays all student marks.
- Calculates the highest marks, lowest marks, total marks, and average marks.
- Releases the allocated memory after use.

## Algorithm
1. Read the number of students from the user.
2. Allocate memory dynamically for storing the marks using malloc().
3. Check whether memory allocation is successful.
4. Read the marks of all students.
5. Display the entered marks.
6. Calculate the highest marks, lowest marks, total marks, and average marks.
7. Display the calculated statistics.
8. Release the allocated memory using free().
9. End the program.

## Time Complexity

| Operation | Time Complexity |
| Memory Allocation | O(1) |
| Input Marks | O(n) |
| Display Marks | O(n) |
| Calculate Statistics | O(n) |
| Release Memory | O(1) |

## Space Complexity

O(n) space is used since memory is dynamically allocated to store the marks of all students.

## Sample Input

```
Enter the Number of Students : 5

Enter the Marks of 5 Students
78
85
92
67
88
```

## Sample Output

```
Student Marks:

Student [1] : 78
Student [2] : 85
Student [3] : 92
Student [4] : 67
Student [5] : 88

Statistics
Highest Marks : 92
Lowest Marks : 67
Total Marks : 410
Average Marks : 82.00

Memory Released Successfully!!
```

## Learning Outcome

This program helped in understanding dynamic memory allocation using malloc(), storing data in dynamically allocated arrays, performing basic statistical operations on array elements, and releasing allocated memory using free().