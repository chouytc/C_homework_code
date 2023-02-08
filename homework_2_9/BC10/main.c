#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//改写法不正确
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	printf("%.0f", a);
//
//	return 0;
//}

//四舍五入的实质：
//正数+0.5取整
//负数-0.5取整
int main()
{
	float a = 0;
	scanf("%f", &a);
	if (a >= 0)
	{
		int b = a + 0.5;
		printf("%d", b);
	}
	else {
		int b = a - 0.5;
		printf("%d", b);
	}

	return 0;
}