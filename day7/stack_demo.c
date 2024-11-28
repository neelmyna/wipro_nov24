#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    int size = 0, choice = 0, sp = -1;
    // sp = -1 indicates that the stack is empty at the beginning
    printf("Enter size of the array: ");
    scanf("%d", &size); // read size of stack from user

    double *stk = (double *)malloc(sizeof(double) * size);
    // create an array in HEap of user given size
    do
    {
        puts("1:Push 2:Pop 3:Top 4:DisplayStack 5:Exit. Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            sp = push(stk, sp, size);
            break;
        case 2:
            sp = pop(stk, sp);
            break;
        case 3:
            top(stk);
            break;
        case 4:
            displayStack(stk);
            break;
        case 5:
            puts("End of Program");
        default:
            puts("Invalid Input entered");
        }

    } while (choice != 0);
    free(stk); // deallocate memory
    // Note that stk pointer is now a Dangling Pointer
    puts("End of Program");
}