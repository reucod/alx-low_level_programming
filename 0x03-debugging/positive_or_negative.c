#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - print a number
 * @i : integer
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);

else if (i < 0)
printf("%d is negative\n", i);

else
printf("%d is zero\n", i);
}
