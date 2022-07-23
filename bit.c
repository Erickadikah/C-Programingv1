#include <stdio.h>

int main()
{
	unsigned int x = 9;
	unsigned int y = 24;
	unsigned int r;

	r = x << 1;
	printf("x << 1: %d\n", r);

	r = x >> 2;
	printf("x >> 2: %d\n", r);
	r = ~x;
	printf("~x: %d\n", r);

	r = x & y;
	printf("x & y: %d\n", r);

	r = x | y;
	printf("x | y: %d\n", r);
	r = x ^ y;
	printf("x ^ y: %d\n", r);
}