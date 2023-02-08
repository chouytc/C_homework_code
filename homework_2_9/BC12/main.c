#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	long long ID_num = 0;
	float c_score = 0;
	float math_score = 0;
	float en_score = 0;
	scanf("%lld;%f,%f,%f", &ID_num, &c_score, &math_score, &en_score);
	printf("The each subject score of No. %lld is %.2f, %.2f, %.2f.",ID_num,c_score,math_score,en_score);

	return 0;
}