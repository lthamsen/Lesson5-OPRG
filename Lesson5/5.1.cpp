#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void)
{

	srand(time(0));

	int array1[SIZE] = {0};

	for (size_t index = 0; index < SIZE; index++)
		array1[index] = rand() %(50-(-50)+1)-50;

	for (size_t index = 0; index < SIZE; index++)		
		printf_s("%d\n", array1[index]);
}