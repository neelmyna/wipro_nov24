#include "stack.h"

int push(double *ptr, int sp, int size)
{
    if(sp == size-1) {
        puts("Stack is Full");
        return sp;
    }
    sp++;
    printf("Enter new element to be pushed on the Stack: ");
    scanf("%lf", &ptr[sp]);
    // printf("%.2lf element is pushed on theStack at index %d \n", sp);
    return sp;
}

int pop(double *stk, int sp)
{
}

void top(const double *stack)
{
}

void displayStack(const double *ptr)
{
}

int isEmpty(const double *ptr)
{
}