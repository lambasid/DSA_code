# Warehouse Inventory Management System

This project is an Inventory Management System implemented using linked lists and structures in C. It provides functionalities to insert, search, update, and print inventory parts, making it useful for managing warehouse inventory.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Dependencies](#dependencies)
- [Configuration](#configuration)
- [Documentation](#documentation)
- [Examples](#examples)
- [Troubleshooting](#troubleshooting)
- [Contributors](#contributors)
- [License](#license)

## Introduction

The Inventory Management System allows users to manage warehouse parts efficiently. Users can add new parts, search for existing parts, update part quantities, and print the entire inventory. The system is designed to handle operations using a linked list to store the parts dynamically.

## Installation

To compile and run the program, you need a C compiler. Follow the steps below to get started:

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/inventory-management-system.git
    ```
2. Navigate to the project directory:
    ```bash
    cd inventory-management-system
    ```
3. Compile the program:
    ```bash
    gcc -o inventory inventory.c
    ```
4. Run the executable:
    ```bash
    ./inventory
    ```

## Usage

Upon running the program, the user is prompted with a menu to perform different operations:

- `i`: Insert a new part.
- `s`: Search for an existing part.
- `u`: Update the quantity of an existing part.
- `p`: Print the inventory list.
- `q`: Quit the program.

### Example Usage

1. **Insert a new part**:
    ```text
    Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit)): i
    Enter part number: 101
    Enter part name: Widget
    Enter quantity on hand: 50
    ```

2. **Search for a part**:
    ```text
    Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit)): s
    Enter part number: 101
    Part name: Widget
    Quantity on hand: 50
    ```

3. **Update a part's quantity**:
    ```text
    Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit)): u
    Enter part number: 101
    Enter change in quantity on hand(or total current quantity): 75
    ```

4. **Print the inventory list**:
    ```text
    Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit)): p
    |Part Number|   |Part Name|    |Quantity on Hand|
       101            Widget          75
    ```

## Features

- Add new parts to the inventory.
- Search for existing parts by part number.
- Update the quantity of parts on hand.
- Print the entire inventory list.

## Dependencies

This program does not have any external dependencies and relies solely on the standard C library.

## Configuration

No special configuration is required for this project.

## Documentation

### Functions

- `struct part *find_part(int number);`  
  Searches for a part in the inventory by part number.

- `void insert(void);`  
  Inserts a new part into the inventory.

- `void search(void);`  
  Searches for and displays a part by part number.

- `void update(void);`  
  Updates the quantity of a specified part.

- `void print(void);`  
  Prints the entire inventory list.

- `int read_int(const char *prompt);`  
  Reads an integer from the user with a prompt.

- `void read_string(const char *prompt, char *str, int max_len);`  
  Reads a string from the user with a prompt.

## Examples

Refer to the [Usage](#usage) section for example interactions with the program.

## Troubleshooting

If you encounter any issues:
- Ensure that the C compiler is installed and properly configured.
- Verify that you are in the correct directory and that the source file (`inventory.c`) is present.
- Check for any compilation errors and fix the reported issues.

## Contributors

- **Siddharth Lamba** - Initial work

