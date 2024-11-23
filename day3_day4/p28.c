#include <stdio.h>
#include <stdlib.h>
/*
Read N
SMALL_DIGIT = 9
BIG_DIGIT = 0
TEMP_NUMBER = N
until N is not 0 do:
    REMAINDER_DIGIT = N % 10
    N = N / 10
    if SMALL_DIGIT > REMAINDER_DIGIT then:
        SMALL_DIGIT = REMAINDER_DIGIT
    if BIG_DIGIT < REMAINDER_DIGIT then:
        BIG_DIGIT = REMAINDER_DIGIT
print SMALL_DIGIT
print BIG_DIGIT
*/
int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int small_digit = 9, big_digit = 0, remainder_digit = 0;
    while (input_number != 0)
    {
        remainder_digit = input_number % 10;
        if (small_digit > remainder_digit)
            small_digit = remainder_digit;
        if (big_digit < remainder_digit)
            big_digit = remainder_digit;
        input_number = input_number / 10;
    }
    printf("Smallest digit = %d, Biggest Digit = %d", small_digit, big_digit);
}