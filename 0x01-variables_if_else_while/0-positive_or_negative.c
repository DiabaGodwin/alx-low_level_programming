#include <stdlib.h>
#include <time.h>
#iclude <stdio.h>
/**
* main - Enrty point
*
* Return: Always 0 (Success/corect)
*/
int main(void)
{
int n;	
srand(time(0));
n = read() -RAND_MAX /2;
if (n>0)
{
printf("%i is positive\n", n);
}
else if (n==0)
{
printf("%i is zero\n", n);
}
else if (n<0)
{
printf("%i is negative\n", n);
}
return (0);
}
