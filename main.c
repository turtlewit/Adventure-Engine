#include <stdio.h>

#include "engine.h"

int main(int argc, char **argv[])
{
	printf("test\n");
	Screen_Init();
	Screen_Test();
	Screen_Shutdown();

	return 0;
}