#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()//只进行打印菜单功能
{
	printf("*******************\n");
	printf("****   1.play  ****\n");
	printf("****   0.exit  ****\n");
	printf("*******************\n");
	/*printf("请输入你的选择：");
	scanf("%d", &i);*/   //此处应该放在main函数menu调用中
}

//void game()
//{
//	//进入游戏后先打印网格图（定义二维数组）
//	char a[Row][Col] = { 0 };
//
//	//数组初始化  打印网格图
//	Board(a, Row, Col);
//	ShowBoard(a, Row, Col);
//
//	//进入游戏,未分出胜负之前一直进行游戏
//	while (1)
//	{
//		Player(a, Row, Col);
//		Computer(a, Row, Col);
//		ShowBoard(a, Row, Col);//下完棋后展示棋盘
//
//	}


void game()
{
	//进入游戏后先打印网格图（定义二维数组）
	char a[Row][Col] = { 0 };
	char ret = 0;
	//数组初始化  打印网格图
	Board(a,Row,Col);
	ShowBoard(a,Row,Col);

	//进入游戏,未分出胜负之前一直进行游戏
	while (1)
	{
		Player(a, Row, Col);
		ShowBoard(a, Row, Col);
		//int ret = IsWin(a, Row, Col);
		//' '--继续走
		//*--玩家赢
		//#--电脑赢
		//0--平局
		//
		ret = IsWin(a, Row, Col);
		//if (ret == ' ')
		if (ret != ' ')
			break;
		Computer(a, Row, Col);
		ShowBoard(a, Row, Col);//下完棋后展示棋盘
		ret =IsWin(a, Row, Col);
		if (ret != ' ')
			break;
	}
	if (ret == '*')
		printf("恭喜你，获胜了！\n");
	else if (ret == '#')
		printf("很遗憾，你输了。。。\n");
	else
		printf("平局\n");




int main()
{
	int i;
	do
	{
		menu();//先打印出功能供用户选择
		printf("请输入你的选择：");
		scanf("%d", &i);
		//switch语句进行选择
		switch (i)
		{
		case 1:game(); break;//进入游戏
		case 0:printf("退出游戏Bye...\n"); break;
		default:
			printf("选择错误请重新选择。\n");
			break;//跳出switch语句让用户重新选择
		}

	} while (i); //;   //while(1)
	
	
	system("pause");
	return 0;
}

/*分析：
1.进程：打印菜单——》进入游戏——》


2.外观：网格图——》

3.
*/
