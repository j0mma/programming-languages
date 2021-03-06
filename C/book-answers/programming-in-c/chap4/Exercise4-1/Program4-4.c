/*!****************************************************************************
 * @file Program4-4.c
 * @brief Asking the user for input
******************************************************************************/
// Program to calculate the nth triangular number

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber;
	
	printf("What triangular number do you want ? ");
	scanf("%i", &number);

	triangularNumber = 0;
	
	for (n = 1; n <= number; n++)
		triangularNumber += n;

	printf("The %ith triangular number is %i\n", 
			number, triangularNumber);

	return 0;

}


