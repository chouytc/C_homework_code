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
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//	printf("����9�ĸ���:%d", count);
//
//	return 0;
//}

////��һ:���Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	scanf("%d%d", &m, &n);
//	//�������Լ��max����m��n�Ľ�Сֵ
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
//			printf("���Լ��:%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}

////����:շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//	if (m == n)
//	{
//		printf("���Լ��:> %d\n", m);
//	}
//	else
//	{
//		while (m % n)
//		{
//			t = m % n;
//			m = n;
//			n = t;
//		}
//		printf("���Լ��:> %d\n", t);
//	}
//
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
// ��һ
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2 -> i-1֮�������ȥ�Գ�i�����ܷ�����
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

//����
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - ��ƽ������ - ͷ�ļ� math.h
//	for (i = 101; i <= 200; i += 2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2 -> i-1֮�������ȥ�Գ�i�����ܷ�����
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i��������
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

//��������Ϸ - ��ϰ

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
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess < key)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else if (guess > key)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("��ʼ������Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("��Ϸ���˳���������������Ϸ\n");
//			break;
//		default:
//			printf("���벻�Ϸ�������������\n");
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


//ʵ�ֺ����ж�year�ǲ������ꡣ
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
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//
//	return 0;
//}


//ʵ��һ�������������������������ݡ�
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


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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
//	printf("����9�ĸ���:%d", count);
//
//	return 0;
//}


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
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




//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//���ܳ�ʼ��Ϊ0����ȻȫΪ���������
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



//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//int main()
//{
//	int i = 0;
//	//����
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
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


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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



//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ǵݹ�
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

//�ݹ�
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



//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
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

//�ݹ�
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
//	char arr[] = "hello bit";//����Ϊ9
//	int len = my_strlen(arr);
//
//	printf("len = %d", len);
//
//	return 0;
//}


//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������(δʵ�ְ汾)
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



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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




//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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




//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
// ���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//�ݹ�
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

//�ǵݹ�
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d", ret);
//
//	return 0;
//}

//test()
//{
//	return 1, 2;
//}
//
//int main()
//{
//	printf("%d", test());
//
//	return 0;
//}



//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    printf("%d", Fun(2));
//
//    return 0;
//}



//�ַ������򣨵ݹ�ʵ�֣�
//�ǵݹ�
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];//str[left] = *(str+left);
//		str[left] = str[right];//str[right] = *(str+right);
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//
//	printf("%s", arr);//fedcba
//
//	return 0;
//}

//�ݹ�
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)//�˲��軭ͼ�����ڣ��е��Ʊʼǣ�5.�����ݹ�
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	//�ж�����
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);//4
//	}
//	*(str + len - 1) = tmp;//5
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//int DigitSum(int n)
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
//	int num = 1729;
//	int sum = DigitSum(num);
//
//	printf("%d\n", sum);
//
//	return 0;
//}



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//double my_pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if(k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / (my_pow(n, -k));
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = my_pow(n, k);
//	printf("%lf", ret);
//
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//void init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);//��������
//	print(arr, sz);//��ӡ����
//	init(arr, sz, 0);//�����ʼ��
//
//	return 0;
//}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void swap(int arr1[], int arr2[], int sz1, int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	printf("����ǰ\n");
//	print(arr1, sz1);
//	printf("\n");
//	print(arr2, sz2);
//
//
//	swap(arr1, arr2, sz1, sz2);
//	printf("\n");
//	printf("������\n");
//	print(arr1, sz1);
//	printf("\n");
//	print(arr2, sz2);
//
//	return 0;
//}


////ʵ��һ�������������ð������
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,23,456,13,9,123,65,2,609,235,345,730 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	printf("Sorted arr:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}


//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//int dif_bits(int m, int n)
//{
//	int x = m ^ n;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 31; i++)
//	{
//		if (x >> i & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	dif_bits(m, n);
//
//	printf("%d\n", dif_bits(m, n));
//
//	return 0;
//}


//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)
//	{
//		if (n >> i & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//����������ʱ������������������������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	printf("����ǰ��%d %d\n", m, n);
//	m = m ^ n;
//	n = m ^ n;
//	m = m ^ n;
//	printf("������%d %d\n", m, n);
//
//	return 0;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//void printArray(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,4,7,23,5,46,13,567,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printArray(arr, sz);
//
//	return 0;
//}


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int temp = 0;
//
//	scanf("%d%d", &a, &n);
//	for (int i = 0; i < n; i++)
//	{
//		temp = temp * 10 + a;
//		sum = sum + temp;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int temp = i;
//		int count = 0;
//		int sum = 0;
//		while (temp != 0)
//		{
//			count++;
//			temp /= 10;
//		}
//		temp = i;
//		while (temp != 0)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


