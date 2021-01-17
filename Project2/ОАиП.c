#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	randomize();
	for (i = 0; i < 10; i++) printf("%d ", random(25));
	return 0;
}