#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char c = 0;
	scanf("%c", &c);
	printf("%c%c%c\n", c, c, c);
	printf("%c%c%c\n", c, c, c);
	printf("%c%c%c\n", c, c, c);

	return 0;
}