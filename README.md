# Bitwise Operations Calculator

## Overview

This program allows users to perform basic bitwise operations on two binary numbers. The available operations are AND, OR, NAND, and XOR. After performing an operation, the user can choose to repeat the process or exit the program.

## Features

- **Bitwise Operations**:
  - **AND**: Performs the bitwise AND operation on two binary numbers.
  - **OR**: Performs the bitwise OR operation on two binary numbers.
  - **NAND**: Performs the bitwise NAND operation (NOT AND) on two binary numbers.
  - **XOR**: Performs the bitwise XOR operation on two binary numbers.
  
- **User Input**: Users input two binary numbers (0 or 1) and select the operation to perform.
- **Error Handling**: The program validates the inputs to ensure they are within acceptable binary values (0 or 1). If invalid input is detected, the program displays an error message and exits.
- **Reusability**: After performing an operation, the user is prompted to repeat the operation or exit the program.

## Instructions

1. **Run the Program**: Launch the program to begin.
2. **Select Operation**: The program will prompt you to choose one of the four operations:
   - **1**: AND
   - **2**: OR
   - **3**: NAND
   - **4**: XOR
3. **Input Binary Numbers**: Enter two binary numbers (either 0 or 1) when prompted.
4. **View Result**: The result of the selected bitwise operation will be displayed.
5. **Repeat or Exit**: After the operation, the user will be asked whether they want to perform another operation or exit the program.

## Example Output

```plaintext
Which operation you want to do?
1-AND
2-OR
3-NAND
4-XOR
Enter your choice:(1-4) 
2
Enter two numbers in binary form: 
1
0
1 OR 0 = 1
Do you want to perform another operation?: y

Which operation you want to do?
1-AND
2-OR
3-NAND
4-XOR
Enter your choice:(1-4) 
3
Enter two numbers in binary form: 
1
1
1 NAND 1 = 0
Do you want to perform another operation?: n
