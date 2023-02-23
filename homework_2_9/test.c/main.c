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
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
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

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (((i + 1) % 10 == 0) || (i + 1) / 10 == 1)
		{
			count++;
		}
	}
	printf("数字9的个数:%d", count);

	return 0;
}


