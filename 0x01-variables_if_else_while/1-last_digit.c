#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Enrty point
*
*Return: Always 0 (Success/correct)
*/

int main(void)

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("last digit of %i is %i and greater than \n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %i is %i and is 0\n", n, n % 10) 
}
else if (n > 0)
{
printf("%i is positive\n", n n % 10);
}
return (0);
}
