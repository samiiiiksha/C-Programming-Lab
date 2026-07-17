# Inventory Management System in C

## Objective
To build a C program that manages product records using structures and performs operations such as adding, displaying, searching, updating, sorting products by price, and calculating the total inventory value.

## Problem Statement
Develop a program that:
- Adds new product records.
- Displays all product records.
- Searches for a product using the Product ID.
- Updates product details.
- Sorts products in ascending order of price.
- Calculates the total inventory value.
- Stores all records using an array of structures.

## Algorithm
1. Define a structure named Product containing Product ID, Product Name, Price, and Quantity.
2. Create an array of structures to store product records.
3. Display a menu with different operations.
4. If the user selects Add:
   - Read the product ID, name, price, and quantity.
   - Store the record in the next available position.
5. If the user selects Display:
   - Display all stored product records.
6. If the user selects Search:
   - Read the Product ID.
   - Search the array and display the matching product.
7. If the user selects Update:
   - Read the Product ID.
   - Search the product and update its name, price, and quantity.
8. If the user selects Sort:
   - Sort all product records in ascending order of price.
9. If the user selects Calculate Total Inventory Value:
   - Multiply the price and quantity of each product.
   - Add all values to calculate the total inventory value.
10. Repeat the menu until the user chooses Exit.

## Time Complexity

| Operation | Time Complexity |
| Add Product | O(1) |
| Display Products | O(n) |
| Search Product | O(n) |
| Update Product | O(n) |
| Sort Products | O(n²) |
| Calculate Total Inventory Value | O(n) |

## Space Complexity

O(n) space is used to store product records in an array of structures.

## Sample Input

```
1
101
Apple
50
2

1
102
Strawberry
80
4

2
```

## Sample Output

```
Product Added Successfully!!
Product Added Successfully!!

Product Details:

Product 1
Product ID : 101
Product Name : Apple
Product Price : 50
Product Quantity : 2

Product 2
Product ID : 102
Product Name : Strawberry
Product Price : 80
Product Quantity : 4
```

## Learning Outcome

This program helped in understanding the use of structures in C, arrays of structures, implementing basic inventory management operations, sorting records using Bubble Sort, searching and updating records.
