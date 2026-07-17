# String Utility Toolkit

## Objective
To build a menu driven C program that performs string operations like finding length, reversing, checking palindrome, and counting vowels, digits, spaces, and character frequency.

## Problem Statement
Given a string entered by the user, develop a program that can:
- Find the length of the string
- Reverse the string
- Check whether the string is a palindrome
- Count the number of vowels
- Count the number of digits
- Count the number of spaces
- Display the frequency of each character in the string

## Algorithm
1. Show a menu with options: Length, Reverse, Palindrome, Vowels, Digits, Spaces, Character Frequency, Exit.
2. Take a string as input from the user (before every operation except Exit).
3. Based on the user's choice, call the matching function:
   - Length: loop through the string until the null character \0 is reached, counting each character.
   - Reverse: copy characters from the end of the string to the start into a new array.
   - Palindrome: compare characters from both ends moving towards the middle; if all match, it's a palindrome.
   - Vowels: loop through the string and check each character against a, e, i, o, u (both cases).
   - Digits: loop through the string and check if each character falls between '0' and '9'.
   - Spaces: loop through the string and count how many characters are a blank space.
   - Character Frequency: keep a count array of size 256 (one box per possible character), increase the matching box for every character seen, then print all boxes that aren't zero.
4. Repeat until the user chooses Exit.

## Time Complexity
| Operation | Time Complexity |
| Length | O(n) |
| Reverse | O(n) |
| Palindrome | O(n) |
| Count Vowels | O(n) |
| Count Digits | O(n) |
| Count Spaces | O(n) |
| Character Frequency | O(n) |

## Space Complexity
O(n) for the string itself and the reversed copy, plus O(1) extra space for counting (the frequency array size stays fixed at 256 regardless of string length).

## Sample Input
```
Enter Choice : 3
Enter a String : madam
```

## Sample Output
```
-------------------------------
            MAIN MENU
-------------------------------
1. Find Length
2. Reverse String
3. Check Palindrome
4. Count Vowels
5. Count Digits
6. Count Spaces
7. Character Frequency
8. Exit

Enter Choice : 7
Enter a String : hello world

Character Frequency :
  : 1
d : 1
e : 1
h : 1
l : 3
o : 2
r : 1
w : 1
```

## Learning Outcome
This program helped in understanding how strings work as character arrays in C, and how to loop through them until the null character, gave practice comparing characters from both ends for palindrome checking, using simple range checks (like '0' to '9') to classify characters, and using a count array to track how often each character appears in a string.