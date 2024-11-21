#include <stdio.h>
#include <math.h>
// Program to check if a number if perfect square.

int main()
{
    int averagScore = 0;
    printf("Enter your average score to print result: ");
    scanf("%d", &averagScore);
    if (averagScore >= 0 && averagScore <= 50)
        puts("Your result is Fail");
    else if (averagScore <= 80)
        puts("Your result is Second class");
    else if (averagScore <= 95)
        puts("Your result is First class");
    else if (averagScore <= 100)
        puts("Your result is Distinction");
    else
        puts("Invalid score entered");
}
