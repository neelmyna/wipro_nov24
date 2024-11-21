#include <stdio.h>
// Program to do understand updation operators.

int main()
{
    int x = 10, y = 3, z = -1;
    x++;
    printf("X=%d, Y=%d, Z=%d \n", x, y, z); // 11 3 -1
    ++x;
    printf("X=%d, Y=%d, Z=%d \n", x, y, z); // 12 3 -1
    y = z--;
    printf("X=%d, Y=%d, Z=%d \n", x, y, z); // 12 -1 -2
    z = --x;
    printf("X=%d, Y=%d, Z=%d \n", x, y, z); // 11 -1 11
    x = y++ + ++y;
    //  -1  + 1
    printf("X=%d, Y=%d, Z=%d \n", x, y, z); // 0  1  11
}
