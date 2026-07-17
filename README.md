# Student Management System using Structures in C

## Objective
To build a C program that manages student records using structures. The program performs operations such as adding, displaying, searching, updating, and deleting student records using an array of structures.

## Problem Statement
Develop a program that:
- Adds a new student record.
- Displays all student records.
- Searches for a student using the roll number.
- Updates the details of a student.
- Deletes a student record.
- Stores all records using an array of structures.

## Algorithm
1. Define a structure named Student containing roll number, name, and marks.
2. Create an array of structures to store student records.
3. Display a menu with different operations.
4. If the user selects Add:
   - Read the student's roll number, name, and marks.
   - Store the record in the next available position.
5. If the user selects Display:
   - Display all stored student records.
6. If the user selects Search:
   - Read the roll number.
   - Search the array and display the matching record.
7. If the user selects Update:
   - Read the roll number.
   - Search the record and update the student's name and marks.
8. If the user selects Delete:
   - Read the roll number.
   - Search the record and remove it by shifting the remaining records.
9. Repeat the menu until the user chooses Exit.

## Time Complexity

| Operation | Time Complexity |
| Add Student | O(1) |
| Display Students | O(n) |
| Search Student | O(n) |
| Update Student | O(n) |
| Delete Student | O(n) |

## Space Complexity

O(n) space is used to store the student records in an array of structures.

## Sample Input

```
1
101
Simi
99

1
102
Timmy
88

2
```

## Sample Output

```
Student Added Successfully!!
Student Added Successfully!!

Student Records:

Student 1
Roll Number : 101
Name : Simi
Marks : 99

Student 2
Roll Number : 102
Name : Timmy
Marks : 88
```

## Learning Outcome

This program helped in understanding the use of structures in C, arrays of structures, passing structures to functions, and performing basic record management operations such as adding, displaying, searching, updating, and deleting data.