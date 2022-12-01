#include<stdio.h>
#include<stdlib.h>

int cubeByValue(int n);

int main() {
	
	int number = 5;
	//printf("請輸入一個數");
	//scanf_s("%d",&number);
	printf("The original value of number is %d", number);

	number = cubeByValue(number);

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;

}

int cubeByValue(int n) {
	return n * n* n;
}