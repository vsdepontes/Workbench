#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "lib/linked-list-stack.h"


void empty_stack_message();
void undeflow_message();

struct StackNode* top = NULL;


int main()
{
    int choice;
    while (true) {
        printf("Operations:\n"
               "1 - Push a number\n"
               "2 - Pop a number\n"
               "3 - Peek last value\n"
               "4 - Current size\n"
               "5 - Exit\n"
               "Enter the choice: "
        );
        scanf("%d",&choice);
        printf("\n");

        switch (choice)
        {
            case 1: {
                int value;
                printf("Enter the value: ");
                scanf("%d", &value);
                push(&top, value);
                printf("\n");
                break;
            }
            case 2: {
                if (pop(&top) == -1) {
                    undeflow_message();
                    printf("\n");
                }
                break;
            }
            case 3: {
                if (size(top) == 0) {
                    empty_stack_message();
                    printf("\n");
                    break;
                }
                printf("%d\n\n", peek(top));
                break;
            }
            case 4: {
                printf("%d\n\n", size(top));
                break;
            }
            case 5: exit(0);

            default: printf("Invalid choice!\n\n");
        }
    }
}

void empty_stack_message() {
    printf("The stack is empty!\n");
}

void undeflow_message() {
    printf("Underflow!\n");
}