#include <stdlib.h>
#include <stdio.h>

int main()
{

	/*
	*	循环计算黄金分隔
	*/
	unsigned int aryFib[50] = { 1, 1 };
	for (int i = 2; i < 42; i++)
	{
		aryFib[i] = aryFib[i - 1] + aryFib[i - 2];
		printf("%2d%15u\t%f\r\n", i - 2, aryFib[i], (double)aryFib[i - 1] / aryFib[i]);
	}

	/*
	*	使用递归实现走迷宫
	*/

	char szMaze[][21] = {
	"11111111111111111111",
	"10110011111111110$11",
	"10000111111111110111",
	"10111111111111110111",
	"10100000000000110111",
	"10101111111110110111",
	"10001111111110000111",
	"11111111111111111111",
	};

	//Show(szMaze, 21);
	//Maze(szMaze, 1, 1);

	return 0;
}


int Show(char szMaze[][21], int nRow)
{
	for (int i = 0; i < nRow; i++)
	{
		puts(szMaze[i]);
	};
	return 0;
};


int Maze(char szMaze[][21], int x, int y)
{
	if (szMaze[x][y] == '$') {
		puts("过关！！");
		system("pause");
		exit(0);
	}
	szMaze[x][y] = '.';
	system("cls");
	Show(szMaze, 8);
	system("pause");
	if (szMaze[x][y + 1] == '0' || szMaze[x][y + 1] == '$') {
		Maze(szMaze, x, y + 1);
	};
	if (szMaze[x + 1][y] == '0' || szMaze[x + 1][y] == '$') {
		Maze(szMaze, x + 1, y);
	};
	if (szMaze[x][y - 1] == '0' || szMaze[x][y - 1] == '$') {
		Maze(szMaze, x, y - 1);
	};
	if (szMaze[x - 1][y] == '0' || szMaze[x - 1][y] == '$') {
		Maze(szMaze, x - 1, y);
	};
	szMaze[x][y] = '#';
	system("cls");
	Show(szMaze, 8);
	system("pause");
	return;
};