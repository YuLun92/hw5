#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int points[11] = { 0 };

	for (int i = 0; i < 36000; i++)
	{
		int dieA = rand() % 6;
		int dieB = rand() % 6;
		int point = dieA + dieB + 2;
		points[point - 2]++;
	}
	
	printf("Element\tValue\n");
	for (int i = 0; i < 11; i++)
	{
		printf("%7d\t%5d\n", i + 2, points[i]);
	}

	system("pause");
	return 0;
}

