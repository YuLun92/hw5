#include<stdlib.h>
#include<stdio.h>
#define SIZE 10


void bubbleSort(int * const array, const int size);

int main(void) {
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int i;

	printf("Data items in original order\n");

	for ( i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	bubbleSort(a, SIZE);

	printf("\nData items in ascending order\n");

	for ( i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	bubbleSort(a, SIZE);

	printf("\n");
	system("pause");
	return 0;

}

void bubbleSort(int * const array, const int size) {

	void swap(int *elementPtr, int *element2Ptr);
	int pass;
	int j;

	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size-1;j++)
		{
			if (array[j]>array[j+1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
	
}

void swap(int *elementPtr, int *element2Ptr)
{
	int hold = *elementPtr;
	*elementPtr = *element2Ptr;
	*element2Ptr = hold;
}