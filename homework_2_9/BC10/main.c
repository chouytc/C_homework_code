#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��д������ȷ
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	printf("%.0f", a);
//
//	return 0;
//}

//���������ʵ�ʣ�
//����+0.5ȡ��
//����-0.5ȡ��
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