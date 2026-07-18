# Hospital Patient Management System in C

## Objective

To build a C program that manages patient records using structures and performs operations such as registering patients, displaying records, searching by Patient ID, updating patient information, and deleting records.

## Problem Statement

Develop a program that:
- Registers new patient records.
- Displays all patient records.
- Searches for a patient using the Patient ID.
- Updates patient details.
- Deletes a patient record.
- Stores all records using an array of structures.

## Algorithm

1. Define a structure named Patient containing Patient ID, Patient Name, Age, Gender, and Disease.
2. Create an array of structures to store patient records.
3. Display a menu with different operations.
4. If the user selects Register:
   - Read the patient ID, name, age, gender, and disease.
   - Store the record in the next available position.
5. If the user selects Display:
   - Display all stored patient records.
6. If the user selects Search:
   - Read the Patient ID.
   - Search the array and display the matching patient.
7. If the user selects Update:
   - Read the Patient ID.
   - Search the patient and update the details.
8. If the user selects Delete:
   - Read the Patient ID.
   - Search the patient and remove the record by shifting the remaining records.
9. Repeat the menu until the user chooses Exit.

## Time Complexity

| Operation | Time Complexity |
| Register Patient | O(1) |
| Display Patients | O(n) |
| Search Patient | O(n) |
| Update Patient | O(n) |
| Delete Patient | O(n) |

## Space Complexity

O(n) space is used to store patient records in an array of structures.

## Sample Input

```
1
101
Lima
19
F
Flu

2
```

## Sample Output

```
Patient Registered Successfully!!

Patient Details:

Patient 1
Patient ID : 101
Patient Name : Lima
Patient Age : 19
Patient Gender : F
Disease : Flu
```

## Learning Outcome

This program helped in understanding the use of structures in C, arrays of structures, implementing basic patient management operations, searching, updating, and deleting records.
