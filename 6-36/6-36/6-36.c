#include <stdlib.h>
#include <stdio.h>
#define MAX 100

int main()
{
	char input[MAX], a = 0;
	int n = 0;
	printf("Enter a string: ");
	gets_s(input, MAX);

	while (n < MAX)
	{
		a = input[n++];
		if (a == '\0') break;
	}

	while (n != -1)
		printf("%c", input[n--]);

	printf("\n");
	system("pause");
}