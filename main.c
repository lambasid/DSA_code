
//Inventory management system using linked list and structures
//Siddharth Lamba
//Assignment #3
//Date: 18 July 2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NAME_LEN 20

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL;

// Defining functions so that the compiler know these are the functions used
struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
int read_int(const char *prompt);
void read_string(const char *prompt, char *str, int max_len);