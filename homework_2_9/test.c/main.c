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

//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("******************\n");
//	printf("******1.play******\n");
//	printf("******0.exit******\n");
//	printf("******************\n");
//}
//
//void game()
//{
//	int key = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入:>");
//		scanf("%d", &guess);
//		if (guess < key)
//		{
//			printf("猜小了！\n");
//		}
//		else if (guess > key)
//		{
//			printf("猜大了！\n");
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("开始猜数游戏\n");
//			game();
//			break;
//		case 0:
//			printf("游戏已退出，请重新运行游戏\n");
//			break;
//		default:
//			printf("输入不合法，请重新输入\n");
//		}
//	} while (input);
//
//	return 0;
//}

//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//实现函数判断year是不是润年。
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//void Swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d%d", &a, &b);
//	Swap(&a, &b);
//
//	printf("a = %d b = %d", a, b);
//
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void print_multiplication(int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_multiplication(n);
//
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("数字9的个数:%d", count);
//
//	return 0;
//}


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}




//求10 个整数中最大值
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//不能初始化为0，不然全为负数则错误
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}



//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//int main()
//{
//	int i = 0;
//	//行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d= %-               2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//递归方式实现打印一个整数的每一位
//void print_num(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print_num(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	print_num(n);
//
//	return 0;
//}



//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = n; i >= 1; i--)
//	{
//		ret *= i;
//	}
//
//	printf("%d! = %d\n", n, ret);
//
//	return 0;
//}

//递归
//int Factorial(int n)
//{
//	if (n > 1)
//	{
//		return n * Factorial(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Factorial(n);
//
//	printf("%d! = %d\n", n, ret);
//
//	return 0;
//}



//递归和非递归分别实现strlen
//非递归
//int main()
//{
//	char arr[] = "hello bit";
//	int len = 0;
//	char* parr = arr;
//	while (*parr != '\0')
//	{
//		len++;
//		parr++;
//	}
//	printf("len = %d", len);
//
//	return 0;
//}

//递归
//int my_strlen(char* arr)
//{
//	while (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "hello bit";//长度为9
//	int len = my_strlen(arr);
//
//	printf("len = %d", len);
//
//	return 0;
//}


//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。(未实现版本)
//void reverse_string(char* arr)
//{
//	if (*arr != '\0')
//	{
//		reverse_string(arr + 1);
//		printf("%c", *arr);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//
//	return 0;
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(long long n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int sum = DigitSum(n);
//
//	printf("%d", sum);
//
//	return 0;
//}




//编写一个函数实现n的k次方，使用递归实现。
//int my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//
//	int ret = my_pow(n, k);
//	printf("pow(%d,%d) = %d", n, k, ret);
//
//	return 0;
//}




//递归和非递归分别实现求第n个斐波那契数
// 输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//递归
//int Fib(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//
//	printf("%d", ret);
//
//	return 0;
//}

//非递归
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		a = b;
		b = c;
		c = a + b;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);

	printf("%d", ret);

	return 0;
}