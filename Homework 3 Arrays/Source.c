#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void task8(void);

int main()
{
	
	// Summation of two arrays of 2D 
	//task1();

	// Average of array elements
	//task2();

	// Transpose of matrix
	//task3();

	// Insert element to array
	 //task4();

	// Search for element
	 //task5();

	// Frequency of characters
	// task6();

	// strlen without strlen
	//task7();
	
	// Reverse string
	//task8();
}

void task1(void)
{
	int num[2][2];
	int num2[2][2];
	printf("Enter element of first array:  ");
	for (int i = 0; i < 2; i++) {
		for (int x = 0; x < 2; x++) {
			scanf("%d", &num[i][x]);
		}
	}
	printf("Enter element of second array:  ");
	for (int i = 0; i < 2; i++) {
		for (int x = 0; x < 2; x++) {
			scanf("%d", &num2[i][x]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int x = 0; x < 2; x++) {
			num[i][x] = num[i][x] + num2[i][x];
		}
	}

	for (int m = 0; m < 2; m++) {
		for (int n = 0; n < 2; n++) {
			printf("%d ", num[m][n]);
		}
		printf("\n");
	}
}

void task2(void)
{
	int x = 0;
	float average = 0;
	float num[1000];
	printf("Enter numbers of Data ");
	scanf("%d", &x);

	for (int i = 0; i < x; i++) {
		printf("%d. Enter Number: ", i + 1);
		scanf("%f", &num[i]);
		average = average + num[i];
	}
	average = average / x;
	printf("Average = %0.2f\n", average);
}

void task3(void)
{
	int row = 0, column = 0;
	int array[10][10] = {0};
	int array2[10][10] = { 0 };
	printf("Enter the number of row and columns : ");
	scanf("%d %d", &row, &column);
	printf("Enter the elements of the matrix : \n");
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= column; j++) {
			printf("Enter the element a%d%d : ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	printf("The Entered Matrix : \n");

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= column; j++) {
			printf("%d  ", array[i][j]);
		}
		printf("\n");
	}

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= column; j++) {
			if (i != j) {
				array2[j][i] = array[i][j];
			}
			else {
				array2[i][j] = array[i][j];
			}
		}
	}
	printf("The Transpose Matrix : \n");

	for (int i = 1; i <= column; i++) {
		for (int j = 1; j <= row; j++) {
			printf("%d  ", array2[i][j]);
		}
		printf("\n");
	}
}

void task4(void)
{
	int num[100] = {0};
	int x = 0;
	int y = 0;
	int location = 0;
	printf("Enter Number of elements:");
	scanf("%d", &x);
	for (int i=0; i < x; i++) {
		scanf("%d", &num[i]);
	}
	printf("Enter Number of element to be inserted");
	scanf("%d", &y);

	printf("Enter location");
	scanf("%d", &location);
	for (int z = x; z >= location-1; z--) {
		num[z + 1] = num[z];
	}
	num[location-1] = y;
	for (int i=0; i < x+1; i++) {
		printf("%d\n", num[i]);
	}
}
void task5(void)
{
	int num[100] = { 0 };
	int x = 0;
	int y = 0;
	int location = 0;
	printf("Enter Number of elements: ");
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		scanf("%d", &num[i]);
	}
	printf("Enter Number of element to be searched: ");
	scanf("%d", &y);

	for (int m = 0; m < x; m++) {
		if (num[m] == y) {
			printf("Number found at %d ", m+1);
		}
	}
}
void task6(void)
{
	char sentence[100];
	char finds[1];
	int count = 0;
	printf("Enter a String : ");
	gets(sentence);
	printf("Enter character to find frequency : ");
	gets(finds);
	int length = strlen(sentence);
	for (int i = 0; i < length;i++) {
		if (sentence[i] == finds[0]) {
			count++;
		}
	}
	printf("Frequency of %s =%d ", finds, count);

}
void task7(void)
{
	char sentence[100];
	int count = 0;
	printf("Enter a String : ");
	gets(sentence);
	int x = 0;
	while(1) {

		if (sentence[x] != 0) {
			count++;
		}
		else { 
			break;
		}
		x++;
	}

	printf("length of string : %d" , count);
}

void task8(void)
{
	char sentence[100];
	char reverse[100];
	printf("Enter a String : ");
	gets(sentence);
	
	int length = strlen(sentence);
	printf("reverse string is : %d \n", length);

	for (int i = 0; i < length; i++) {
		reverse[(length-i-1)] = sentence[i];
	}
	reverse[length] = 0;
	printf("reverse string is : %s", reverse);

}
