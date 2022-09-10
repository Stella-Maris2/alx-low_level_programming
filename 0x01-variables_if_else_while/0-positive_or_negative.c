#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Program to print the last digit of a variable n
 * Return: return 0 (success)
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)


{
	printf("%d is postive\n",n);

}
else if (n == 0)
{

	printf("%d is zero\n",n);
}

else

{    printf("%d is negative\n",n);

}

Return: (0);

}
