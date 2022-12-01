#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int recursiveMaximum(int a[]);
int s[99], i, t2;

int main(void)
{
	printf("請輸入5個數字\n");
	while (i < 5)
	{
		i++;
		scanf_s("%d", &s[i]);
	}

	printf("最大值為%d\n", recursiveMaximum(s));
	system("pause");
	return 0;
}
int recursiveMaximum(int a[])
{
	int regular;
	if (i != 0)
	{
		if (a[1] < a[i])
		{
			regular = a[1];
			a[1] = a[i];
			a[i] = regular;
		}
		i--;
		recursiveMaximum(a);
	}
	else
		return a[1];
}