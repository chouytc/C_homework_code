#pragma once

//头文件包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号的定义
#define ROW 3
#define COL 3

//函数声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);
//1. 玩家赢了 - *
//2. 电脑赢了 - #
//3. 平局 - Q
//4. 游戏继续 - C
char IsWin(char board[ROW][COL], int row, int col);

