#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int A = 0;
int B = 100;

int main(void)
{

	srand(time(0));

	int array1[SIZE] = { 0 };
	int antalNegativeTal = 0;

	for (size_t index = 0; index < SIZE; index++)
		array1[index] = rand() % (B - (A)+1) + (A);

	for (size_t index = 0; index < SIZE; index++)
		printf_s("%d ", array1[index]);



	for (size_t pass = 1; pass < SIZE; pass++)
	{
		
		for (size_t index = 0; index < SIZE -1; ++index)
		{
			if (array1[index] > array1[index + 1])
			{
				int hold = array1[index];
				array1[index] = array1[index + 1];
				array1[index + 1] = hold;
			}
		}
		
	}

	printf_s("\n");
	for (size_t index = 0; index < SIZE; index++)
		printf_s("%d ", array1[index]);

	return 0;
}


