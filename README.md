# Pointer Operations in C

## Objective
To build a C program that demonstrates basic pointer operations such as displaying the address of a variable, dereferencing a pointer, swapping two numbers using pointers, traversing an array using pointers, and performing pointer arithmetic.

## Problem Statement
Develop a program that:
- Displays the memory address of a variable using a pointer.
- Displays the value of a variable using pointer dereferencing.
- Swaps two numbers using pointers.
- Traverses an array using pointers.
- Demonstrates pointer arithmetic using an array.

## Algorithm
1. Read an integer from the user.
2. Pass its address to a function to display its memory address.
3. Pass its address to another function to display its value using dereferencing.
4. Read two integers from the user.
5. Pass their addresses to a function to swap their values.
6. Read five array elements from the user.
7. Pass the array to a function to traverse and display all elements using a pointer.
8. Pass the array to another function to demonstrate pointer arithmetic by:
   - Creating two pointers pointing to different array elements.
   - Finding the difference between the two pointers.
   - Moving one pointer forward using pointer addition.
   - Moving the other pointer backward using pointer subtraction.
   - Displaying the updated values and pointer difference.

## Time Complexity

| Operation | Time Complexity |
| Display Address | O(1) |
| Dereference Pointer | O(1) |
| Swap Numbers | O(1) |
| Traverse Array | O(n) |
| Pointer Arithmetic | O(1) |

## Space Complexity

O(1) extra space is used since only a few pointer variables and temporary variables are required.

## Sample Input

```
Enter a Number : 25

Enter First Number : 10
Enter Second Number : 20

Enter 5 Array Elements : 10 20 30 40 50
```

## Sample Output

```
Memory Address : 0x61ff08
Value Using Pointer : 25

Before Swapping : 10 20
After Swapping : 20 10

Array Elements Using Pointer :
10 20 30 40 50

Pointer Arithmetic :
Initial Value of p1 : 20
Initial Value of p2 : 50
Difference Between Pointers : 3
After p1+2 : 40
After p2-1 : 40
Difference Between Pointers Now : 0
```

## Learning Outcome

This program helped in understanding how pointers store memory addresses, how to access values using dereferencing, how passing addresses to functions allows modifying original variables, how arrays can be traversed using pointers, and how pointer arithmetic works.