#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int A = -50;
int B = 50;

int main(void)
{

	srand(time(0));

	int array1[SIZE] = {0};
	int antalNegativeTal = 0;

	for (size_t index = 0; index < SIZE; index++)
		array1[index] = rand() %(B-(A)+1)+(A);

	for (size_t index = 0; index < SIZE; index++)
	{
		printf_s("%d\n", array1[index]);

		if (array1[index] < 0)
		{
			antalNegativeTal += 1;
		}
			
	}
	printf_s("\n Der er %d negative tal.", antalNegativeTal);
}	