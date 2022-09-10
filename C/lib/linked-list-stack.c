#include <stdbool.h>
#include <stdlib.h>
#include "linked-list-stack.h"


void push(StackNode** top, int value)
{
    struct StackNode *newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    newNode->value = value;
    newNode->next = *top;
    *top = newNode;
}

int pop(StackNode** top)
{
    if (is_stack_empty(*top))
        return -1;
    struct StackNode* temp_top = *top;
    *top = (*top)->next;
    free(temp_top);
}

int peek(StackNode* top)
{
    if (is_stack_empty(top))
        return -1;
    return top->value;
}

int size(StackNode* top)
{
    if(is_stack_empty(top))
        return 0;
    int size = 1;
    struct StackNode* temp_top = top;
    while (temp_top->next != NULL) {
        temp_top = temp_top->next;
        ++size;
    }
    return size;
}

bool is_stack_empty(StackNode* top)
{
    if (top == NULL)
        return true;
    else
        return false;
}