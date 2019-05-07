  #define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>


#define Row 3
#define Col 3


//函数的定义   //分号！！！
void ShowBoard(char a[Row][Col], int row, int col);		//打印棋盘
void Board(char a[Row][Col],int row, int col);		//棋盘的初始化(全部为' '）
void Player(char a[Row][Col], int row, int col);  //玩家走
void Compuer(char a[Row][Col], int row, int col);   //电脑走
                                                   
