#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	
	int time = 2000;

	while (true)
	{
		if (switchOn() == 1)
		{
			for (int i = 1; i <= 6; i++)
				ledOn(i);
			Wait(time);

			for (int i = 1; i <= 6; i++)
				ledOff(i);
			Wait(time);
		}
	}
	return 0;
}