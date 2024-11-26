#include <stdio.h>

int main()
{
    char ch, *pc;
    short int si, *psi;
    int i, *pi;
    double d, *pd;
    printf("%u   %u \n", sizeof(ch), sizeof(pc));
    printf("%u   %u \n", sizeof(si), sizeof(psi));
    printf("%u   %u \n", sizeof(i), sizeof(pi));
    printf("%u   %u \n", sizeof(d), sizeof(pd));
}