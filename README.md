# Warehouse Inventory Management System

## Overview

This project is an Inventory Management System implemented using linked lists and structures in C. It was developed as part of Assignment #3 by Siddharth Lamba on 18 July 2024. The system allows for the insertion, search, update, and display of inventory items in a warehouse.

## Features

- **Insert**: Add a new part to the inventory.
- **Search**: Find a part by its number and display its details.
- **Update**: Modify the quantity of a part in the inventory.
- **Print**: Display the entire inventory with part numbers, names, and quantities.

## Getting Started

### Prerequisites

To compile and run this program, you need:

- A C compiler (e.g., GCC)

### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/siddharthlamba/inventory-management-system.git
    ```

2. Navigate to the project directory:
    ```bash
    cd inventory-management-system
    ```

3. Compile the program:
    ```bash
    gcc -o inventory_management inventory_management.c
    ```

4. Run the program:
    ```bash
    ./inventory_management
    ```

## Usage

When you run the program, you will be prompted to enter an operation code:

- `i`: Insert a new part
- `s`: Search for a part
- `u`: Update the quantity of a part
- `p`: Print the inventory
- `q`: Quit the program

### Example

```bash
**** Warehouse Inventory Management by Siddharth Lamba ****
Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit)): i
Enter part number: 101
Enter part name: Widget
Enter quantity on hand: 50

Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit)): p
|Part Number|   |Part Name|    |Quantity on Hand|
    101            Widget          50

Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit)): q
