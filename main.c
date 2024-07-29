
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

int main(void) {
    char code;

    printf("**** Warehouse Inventory Management by Siddharth Lamba ****\n");
    while (1) {
        printf("Enter operation code (i(insert), s(search or find), u(update), p(print), q(quit): ");
        scanf(" %c", &code);
        // Only takes 1st character from the input
        while (getchar() != '\n')
            ;

        switch (tolower(code)) {
            case 'i': insert();
                break;
            case 's': search();
                break;
            case 'u': update();
                break;
            case 'p': print();
                break;
            case 'q': return 0;
            default:  printf("Illegal input. Please enter i, s, u, p, or q.\n"); //Error Validation
        }
        printf("\n");
    }
}

//declaring insert function
void insert(void) {
    struct part *new_part, *prev, *cur;

    new_part = (struct part *) malloc(sizeof(struct part));
    if (new_part == NULL) {
        printf("Database is full; no new parts can be added.\n");
        return;
    }

    new_part->number = read_int("Enter part number: ");
    for (cur = inventory, prev = NULL; cur != NULL && new_part->number > cur->number; prev = cur, cur = cur->next);

    if (cur != NULL && new_part->number == cur->number) {
        printf("Part already exists.\n");
        free(new_part);
        return;
    }

    read_string("Enter part name: ", new_part->name, NAME_LEN);
    new_part->on_hand = read_int("Enter quantity on hand: ");
    new_part->next = cur;

    if (prev == NULL)
        inventory = new_part;
    else
        prev->next = new_part;
}

//declaring search function
void search(void) {
    int number = read_int("Enter part number: ");
    struct part *p = find_part(number);

    if (p != NULL)
        printf("Part name: %s\nQuantity on hand: %d\n", p->name, p->on_hand);
    else
        printf("Part not found.\n");
}

struct part *find_part(int number) {
    struct part *p;

    for (p = inventory; p != NULL && number > p->number; p = p->next)
        ;

    if (p != NULL && number == p->number)
        return p;
    return NULL;
}

//declaring update function
void update(void) {
    int number = read_int("Enter part number: ");
    struct part *p = find_part(number);

    if (p != NULL) {
        int change = read_int("Enter change in quantity on hand(or total current quantity): ");
        p->on_hand = change;
    } else
        printf("Part not found.\n");
}