#include <stdio.h>

int is_palindrome(int n)
{
	int reversed = 0;
	int original = n;

	while (n != 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	return (reversed == original);
}

int main() 
{
	int largest = 0;
	
	for (int i = 100; i < 1000; i++)
	{
		for (int j = i; j < 1000; j++)
		{
			int product = i * j;
			if (is_palindrome(product) && product > largest)
			{
				largest = product;
			}
		}
	}
	FILE *file = fopen("102-result", "w");
	if (file != NULL)
	{
		fprintf(file, "%d", largest);
		fclose(file);
	}

	return (0);
}
