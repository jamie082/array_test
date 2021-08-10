#include <stdio.h>

int main (void)
{
	char *array[26] = {"61", "62", "63", "64", "65", "66", "67", "68", "69", "6A", "6B", "6C", "6D", "6E", "6F", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "7A"};

	int input;

	printf("\n");

	printf("line number for asterisk: ");
	scanf(" %d", &input);

	printf("\n");

	int sum = 0;
	for (int i = 0; i < 26; i++)
	{
		sum =+ i;

		if(i == input)
		{
			printf("%s\t%d*\n", array[i], i);
		}

		else if (i != input)
		{
			printf("%s\t%d\n", array[i],i);
		}

	}

	printf("\nsum: %d\n\n", sum);

	return 0;
}
