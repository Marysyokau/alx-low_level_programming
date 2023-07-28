#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
* main - i print q int
* Return: 0
*/
=======
 * main - i print equivalent
 * Return: 0
 */
>>>>>>> eefefc8b2b916bcf7e4b2ab434d0c7518c65f99f

int main(void)
{
int i = 1;

while (i <= 100)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
if (i == 100)
{
printf("Buzz");
}
else
{
printf("Buzz ");
}
}
else
{
printf("%d ", i);
}
i++;
}
printf("\n");
return (0);
}
