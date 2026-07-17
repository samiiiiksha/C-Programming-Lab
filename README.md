# Student Marks Analyzer

## Objective
To build a menu driven C program that stores marks of N students and lets the user display, analyze, search, and sort those marks.

## Problem Statement
Given the marks of N students, develop a program that can:
- Display all the marks
- Find the highest and lowest marks
- Calculate the total marks
- Calculate the average marks
- Search for a particular student's marks
- Sort the marks in ascending order

## Algorithm
1. Take the number of students N as input.
2. Store the marks of all N students in an array.
3. Show a menu with options: Display, Highest & Lowest, Total, Average, Search, Sort, Exit.
4. Based on the user's choice, call the matching function:
   - Display: loop through the array and print each student's marks.
   - Highest & Lowest: loop through the array while tracking the max and min values seen so far.
   - Total: loop through the array and keep adding each value to a sum.
   - Average: calculate total, then divide by N.
   - Search: take a student number as input and directly access that index in the array.
   - Sort: apply bubble sort on the array.
5. Repeat until the user chooses Exit.

## Time Complexity
|    Operation     | Time Complexity |
| Display Marks    | O(n)            |
| Highest & Lowest | O(n)            |
| Total            | O(n)            |
| Average          | O(n)            |
| Search           | O(1)            |
| Sort             | O(n^2)          |

## Space Complexity
O(n) : for storing the marks array.

## Sample Input
```
Enter the number of students : 5
Enter the marks of 5 students
67 45 89 23 78
```

## Sample Output
```
-------------------------------
           MAIN MENU
-------------------------------
1. Display Marks
2. Show Highest & Lowest
3. Calculate Total
4. Calculate Average
5. Search Student Marks
6. Sort Marks
7. Exit

Enter Choice : 1

Student Marks:
Student [1] : 98
Student [2] : 54
Student [3] : 87
Student [4] : 65
Student [5] : 45

Enter Choice : 2
Highest Marks : 98
Lowest Marks : 45
```

## Learning Outcome
This program helped in understanding how to work with arrays to store and manage real-world data like student marks. It also helped build a better sense of how time and space complexity apply to simple everyday operations like searching and sorting.
