#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Return: Always is 0 (Success)
*
**/
int main(void)
{
	/*local variable definition*/
	int n;
srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	/*check the boolean condition*/
	if (n > 0)
	{
	/*if the number is positive then then print*/
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	/*if the number is equal to 0, then print the answer is 0*/
		printf("%d is zero\n", n);
	}
	else
	{
	/*if the number is less than 0, then print the answer is zero*/
		printf("%d is negative\n", n);
	}
	return (0);
} 
