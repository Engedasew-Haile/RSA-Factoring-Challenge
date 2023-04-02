#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char** argv)
{
/**Verify that the user has provided a file path */
	if (argc != 2)
	{
	printf("Usage: factors <file>\n");
	return 1;
	}

/**Open the file and check for errors */

FILE* fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
	printf("Error while opening the file\n");
	return 1;
	}

/**Read the numbers from the file one by one*/

	int n;
	while (fscanf(fp, "%d", &n) == 1)
	{
	/*Factorize the number*/
	int p =2;
	int q = n / p;
	while (p <= )
	{
	if (n % p == 0)
	{
	printf("%d=%d*%d\n", n, p, q);
	break;
	}
	p++;
	q
	}
	}
}
