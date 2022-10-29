#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

/* Task 1 */
/*
 *      Check Number is odd or even
*/

void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void task8(void);

int main() {
	/* Task 1 */
	//	task1();
	/* Task 2 */
	//	task2();
	/* Task 3 */
	//task3();
	/* Task 4 */
	//task4();
	/* Task 5 */
	//task5();
	/* Task 6 */
	//task6();
	/* Task 7 */
    //task7();
	/* Task 8 */
	task8();
}


void task1(void) {
	int num = 0;
	printf("Enter an integar you want to check:  ");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("%d is even.", num);

	}
	else {

		printf("%d is odd.", num);
	}

}

void task2(void) {
	char letter;
	printf("Enter an alphabet: ");
	scanf("%c", &letter);
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
		printf("%c is vowel.", letter);
	}
	else {
		printf("%c is consonant.", letter);
	}
}

void task3(void) {
	float num, num1, num2 = 0;
	printf("Enter Three numbers: ");
	scanf("%f\n%f\n%f", &num, &num1, &num2);
	if (num > num1) {
		if (num > num2) {
			printf("Largest number = %0.2f", num);
		}
		else {
			printf("Largest number = %0.2f", num2);
		}
	}
	else {
		if (num1 > num2) {
			printf("Largest number = %0.2f", num1);
		}
		else {
			printf("Largest number = %0.2f", num2);
		}
	}
}

void task4(void) {
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num == 0) {
		printf("You entered zero.");
	}
	else if (num > 0) {
		printf("%d is Postive", num);
	}
	else {
		printf("%d is Negative", num);
	}
}
void task5(void) {
	char letter;
	printf("Enter a character: ");
	scanf("%c", &letter);
	if (isalpha(letter) != 0) {
		printf("%c is alphabet.", letter);
	}
	else {
		printf("%c is not alphabet.", letter);
	}
}
void task6(void) {
	int num = 0;
	int sum = 0;
	printf("Enter an integar: ");
	scanf("%d", &num);
	for (int i = 0; i <= num; i++) {
		sum = sum + (num - i);
	}
	printf("Sum = %d", sum);
}
void task7(void) {
	int num = 0;
	int mult = 1;
	printf("Enter an integar: ");
	scanf("%d", &num);
	if (num <= 0) {
		printf("Error Factorial of negative number doesn't exist");

	}
	else {
		for (int i = 0; i < num; i++) {
			mult = mult * (num - i);
		}
		printf("Factorial = %d", mult);
	}

}

void task8(void) {
	char operation;
	float num=0, num1=0, result = 0;
	printf("Enter operator whether + or - or * or /: ");
	scanf("%c", &operation);
	printf(	"Enter two operands: ");
	scanf("%f\n%f", &num, &num1);

	switch (operation) {
	case '+':
		result = num + num1;
		break;
	case '-':
		result = num - num1;
		break;
	case '*':
		result = num * num1;
		break;
	case '/':
		result = num / num1;
		break;
	}
	printf("%0.1f %c %0.1f = %0.1f", num, operation, num1, result);
}




