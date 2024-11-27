// Pointer to a Pointer
#include <stdio.h>

int main()
{
    float num = 2.2f;
    float *p = NULL;
    float **pp = NULL;
    p = &num;
    pp = &p;
    printf("Address of p = %p  %u \n", pp);
    printf("Value of pp  = %p \n", pp);
    printf("Value of p   = %p \n", *pp);
    printf("Address of num = %p \n", *pp);
    printf("Value of num = %f \n", **pp);
    printf("Value of num = %f \n", ***(&pp));
    printf("Address of pp = %p \n", &pp);
}