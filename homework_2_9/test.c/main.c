#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int get_Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else {
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int Max = get_Max(a, b);
//	printf("%d\n", Max);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 5 == 0)
//	{
//		printf("YES\n");
//	}
//	else {
//		printf("NO\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= i-1 ; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 0 };
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	if (arr[0] < arr[1])
//	{
//		temp = arr[0];
//		arr[0] = arr[1];
//		arr[1] = temp;
//	}
//	if (arr[0] < arr[2])
//	{
//		temp = arr[0];
//		arr[0] = arr[2];
//		arr[2] = temp;
//	}
//	if (arr[1] < arr[2])
//	{
//		temp = arr[1];
//		arr[1] = arr[2];
//		arr[2] = temp;
//	}
//
//	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum = sum + (1.0 / i);
//		}
//		if (i % 2 == 0)
//		{
//			sum = sum - (1.0 / i);
//		}
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d   ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j] > max)
//		{
//			max = arr[j];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (((i + 1) % 10 == 0) || (i + 1) / 10 == 1)
//		{
//			count++;
//		}
//	}
//	printf("数字9的个数:%d", count);
//
//	return 0;
//}

////法一:最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	scanf("%d%d", &m, &n);
//	//假设最大公约数max就是m和n的较小值
//	if (m > n)
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}
//	for (i = max; i >= 1; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			printf("最大公约数:%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}

////法二:辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//	if (m == n)
//	{
//		printf("最大公约数:> %d\n", m);
//	}
//	else
//	{
//		while (m % n)
//		{
//			t = m % n;
//			m = n;
//			n = t;
//		}
//		printf("最大公约数:> %d\n", t);
//	}
//
//	return 0;
//}

//写一个代码：打印100~200之间的素数
// 法一
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2 -> i-1之间的数字去试除i，看能否被整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//法二
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方函数 - 头文件 math.h
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断i是否为素数
//		//2 -> i-1之间的数字去试除i，看能否被整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//猜数字游戏 - 复习

#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("******************\n");
	printf("******1.play******\n");
	printf("******0.exit******\n");
	printf("******************\n");
}

void game()
{
	int key = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请输入:>");
		scanf("%d", &guess);
		if (guess < key)
		{
			printf("猜小了！\n");
		}
		else if (guess > key)
		{
			printf("猜大了！\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("开始猜数游戏\n");
			game();
			break;
		case 0:
			printf("游戏已退出，请重新运行游戏\n");
			break;
		default:
			printf("输入不合法，请重新输入\n");
		}
	} while (input);

	return 0;
}

