#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */

/* betty style doc for function main goes there */
=======
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
>>>>>>> c9008d08ecfcde29700be36010ff872ab717be55
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

<<<<<<< HEAD
			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					return (0);
=======
	return (0);
>>>>>>> c9008d08ecfcde29700be36010ff872ab717be55
}
