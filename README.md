# Employee Payroll System in C

## Objective

To build a C program that manages employee records using structures and performs operations such as adding employees, calculating HRA, DA, Tax, Gross Salary, Net Salary, displaying salary reports, searching, updating, and sorting employees based on net salary.

## Problem Statement

Develop a program that:
- Adds new employee records.
- Calculates HRA, DA, Tax, Gross Salary, and Net Salary.
- Displays all employee salary records.
- Searches for an employee using the Employee ID.
- Updates employee details and recalculates salary.
- Sorts employees in ascending order of Net Salary.
- Stores all records using an array of structures.

## Algorithm

1. Define a structure named Employee containing Employee ID, Employee Name, Basic Salary, HRA, DA, Tax, Gross Salary, and Net Salary.
2. Create an array of structures to store employee records.
3. Display a menu with different operations.
4. If the user selects Add:
   - Read the employee ID, name, and basic salary.
   - Calculate HRA, DA, Gross Salary, Tax, and Net Salary.
   - Store the record in the next available position.
5. If the user selects Display:
   - Display all employee records with salary details.
6. If the user selects Search:
   - Read the Employee ID.
   - Search the array and display the matching employee.
7. If the user selects Update:
   - Read the Employee ID.
   - Search the employee and update the details.
   - Recalculate HRA, DA, Gross Salary, Tax, and Net Salary.
8. If the user selects Sort:
   - Sort all employee records in ascending order of Net Salary.
9. Repeat the menu until the user chooses Exit.

## Time Complexity

| Operation | Time Complexity |
| Add Employee | O(1) |
| Display Employees | O(n) |
| Search Employee | O(n) |
| Update Employee | O(n) |
| Sort Employees | O(n²) |

## Space Complexity

O(n) space is used to store employee records in an array of structures.

## Sample Input

```
1
101
Limi
40000

1
102
Pepe
60000

2
```

## Sample Output

```
Employee Added Successfully!!
Employee Added Successfully!!

Employee Details:

Employee 1
Employee ID : 101
Employee Name : Limi
Basic Salary : 40000.00
HRA : 8000.00
DA : 4000.00
Tax : 2600.00
Gross Salary : 52000.00
Net Salary : 49400.00

Employee 2
Employee ID : 102
Employee Name : Pepe
Basic Salary : 60000.00
HRA : 12000.00
DA : 6000.00
Tax : 7800.00
Gross Salary : 78000.00
Net Salary : 70200.00
```

## Learning Outcome

This program helped in understanding the use of structures in C, arrays of structures, salary calculations using conditional statements, searching, updating, and sorting employee records.
```