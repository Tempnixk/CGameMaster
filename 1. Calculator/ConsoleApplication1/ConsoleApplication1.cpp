#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int firstInput, secondInput;
	int addResult, subResult, multiResult;
	float devideResult;
	int max;	


	printf("input 2 integer data\n");
	scanf("%d %d", &firstInput, &secondInput);
	addResult = firstInput + secondInput;
	subResult = firstInput - secondInput;
	multiResult = firstInput * secondInput;
	devideResult = (float) firstInput / secondInput;


	if (firstInput > secondInput) {
		max = firstInput;
	}
	else {
		max = secondInput;
	}
	printf("%d+%d=%d\n", firstInput,secondInput,addResult);
	printf("%d-%d=%d\n", firstInput, secondInput, subResult);
	printf("%d*%d=%d\n", firstInput, secondInput, multiResult);
	printf("%d*%d=%f\n", firstInput, secondInput, devideResult);
	printf("max: %d\n", max);
	return 0;
}