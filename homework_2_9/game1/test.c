#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("*                         *\n");
	printf("*        1 . play         *\n");
	printf("*        0 . exit         *\n");
	printf("*                         *\n");
	printf("***************************\n");
}

void game()
{
	//定义二维数组
	char board[ROW][COL] = { 0 };

	//初始化棋盘 - 初始化为空格
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	char ret = 0;
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();//游戏菜单
		printf("请选择:>");
		scanf("%d", &input);

		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}