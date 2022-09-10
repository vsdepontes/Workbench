#ifndef LINKED_LIST_STACK
#define LINKED_LIST_STACK
#include <stdbool.h>

typedef struct StackNode {
    int value;
    struct StackNode* next;
} StackNode;

extern void push(StackNode** top, int value);
extern int pop(StackNode** top);
extern int peek(StackNode* top);
extern int size(StackNode* top);
extern bool is_stack_empty(StackNode* top);

#endif