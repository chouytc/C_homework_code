#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//NumberOf1���Ǽ������n�Ķ����Ʋ������м���1
//123
//123 % 10 = 3
//123 / 10 = 12
//12 % 10 = 2
//12 / 10 = 1
//1 % 10 = 1
//1 / 10 = 0
//
//15 - 00001111
//15 % 2 = 1
//15 / 2 = 7 - 00000111
//7 % 2 = 1
//7 / 2 = 3 -- 00000011
//3 % 2 = 1
//3 / 2 = 1 -- 00000001
//1 & 2 = 1
//1 / 2 = 0 -- 00000000

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return  count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return  count;
//}

//дһ�������ж�һ�������ǲ���2��n�η�
//2��n�η������֣�����ֻ��һ��1
//�ж� n & (n - 1) == 0

//int main()
//{
//	int n = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//
//	int ret = NumberOf1(n);
//
//	printf("%d\n", ret);
//
//	return;
//}


//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return  count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n;//��ͬΪ0������Ϊ1
//	//ͳ��һ��ret�Ķ������У��м���1����˵��m��n�Ķ�����λ�У��м�λ��ͬ
//	count = NumberOf1(ret);
//
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((m >> i) & 1) != ((n >> i) & 1))
//	//	{
//	//		count++;
//	//	}
//	//}
//	printf("%d\n", count);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//��ȡn�Ķ������е�����λ��ż��λ
//	//00000000000000000000000000001010
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d, a = %d", a, b);
//
//	return 0;
//}


//����С������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;//��ʾ��С������
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			printf("%d\n", m);
//			break;
//		}
//		m++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i = 1; ; i++)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//	}
//
//	return 0;
//}


//���õ���
void reverse(char* left, char* right)
{
	char temp = 0;
	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//������ת��
	//1. �ַ������巭ת��
	//.gnijieb ekil I
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//2. ÿ����������
	//beijing. like I
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//����һ������
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s\n", arr);

	return 0;
}