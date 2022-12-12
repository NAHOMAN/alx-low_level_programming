#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description - print whether the no stored in the variable n is + or -
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
		int n;
			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if (n < 0)
					printf("%d is negative\n", n);
				else if (n == 0)
					printf("%d is zero\n", n);
				else
					printf("%d is postive\n", n);  
				return(0);
}
