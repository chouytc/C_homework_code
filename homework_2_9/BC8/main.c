#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char c = 0;
	scanf("%c", &c);
	printf("  %c\n", c);
	printf(" %c%c%c\n", c, c, c);
	printf("%c%c%c%c%c\n", c, c, c, c, c);
	printf(" %c%c%c\n", c, c, c);
	printf("  %c\n", c);

	return 0;
}