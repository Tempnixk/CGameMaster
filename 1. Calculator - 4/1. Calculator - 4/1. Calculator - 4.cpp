#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int firstValue, secondValue;
	int addResult, subResult, multiResult;
	float devideResult;


	printf("input 2 data\n");
	scanf("%d %d", &firstValue, &secondValue);
	addResult = firstValue + secondValue;
	subResult = firstValue - secondValue;
	multiResult = firstValue * secondValue;
	devideResult = (float)firstValue / secondValue;

	printf("%d + %d = %d\n", firstValue, secondValue, addResult);
	printf("%d - %d = %d\n", firstValue, secondValue, subResult);
	printf("%d * %d = %d\n", firstValue, secondValue, multiResult);
	printf("%d / %d = %f\n", firstValue, secondValue, devideResult);


	return 0;
}