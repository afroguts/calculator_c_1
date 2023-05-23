#include <stdio.h>
#include <math.h>


int main(void) {
	printf("Hello, world and welcome to this simple calculator\n");
	printf("This is a very simple calculator that uses => + => - => * => /\n\n");

	int number_1;
	int number_2;
	char oper;
	int total;
//getting the first number
	printf("enter the first number:  \n");
	scanf_s(" %d", &number_1);
// getting the operator
	printf("Enter the op: \n");
	scanf_s(" %c", &oper);
	//checking the operator
	while (oper != '+' && oper != '*' && oper != '-' && oper != '/') {
		printf("Enter the op: \n");
		scanf_s(" %c", &oper);
	}
//getting the last number
	printf("enter the second number:  \n");
	scanf_s("%d", &number_2);

	if (oper == '+') {
		total = number_1 + number_2;
		printf("the answer is: %d", total);
	}
	else if (oper == '-') {
		total = number_1 - number_2;
		printf("the answer is: %d", total);
	}
	else if (oper == '/') {
		total = number_1 / number_2;
		printf("the answer is: %d", total);
	}
	else if (oper == '*') {
		total = number_1 + number_2;
		printf("the answer is: %d", total);
	}
	
	return 0;
}
