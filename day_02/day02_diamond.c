#include <stdio.h>

/*


学习菱形公式 打印菱形
学习循环遍历


//      5      *
//      4    *	 *
//      3  *	   *
//      2    *	 *
//      1	   *
//       0 1 2 3 4 5        x
//

  公式：a * x + c = y

  1 * a + c = 2
  3 * a + c = 4
  a = 1
  c = 1
  x + 1 == y

  3 * a + c = 4
  5 * a + c = 2
  a = -1
  c = 7
  x * -1 + 7 == y

  5 * a + c = 2
  3 * a + c = 0
  a = -1
  c = 3
  x * 1 - 3 == y

  3 * a + c = 0
  1 * a + c = 2
  a = -1
  c = 3
  x * -1 + -3 == y


 */

int main()
{
	int y = 1;
	int x = 0;
	for (x = 1; x < 6; x++)
	{
		for (y = 0; y < 5; y++) {
			if ((x + 1 == y) || (x * -1 + 7 == y) || (x * 1 + -3 == y) || (x * -1 + 3 == y)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\r\n");
	};


	//	计算猴子吃桃问题
	int number = eat_peach(10);
	printf("桃子数量：%d", number);




	//学习循环
	for_test();

	while_conversion_goto();

	do_while_test();

	for_test();

	for_conversion_goto();

};

/*
一只小猴子一天摘了许多桃子，第一天吃了一半，然后忍不住又吃了一个；
第二天又吃了一半，再加上一个；
后面每天都是这样吃。
到第10天的时候，小猴子发现只有一个桃子了。
问小猴子第一天共摘了多少个桃子。


(nCount+1)*2 才是前一天的桃子数

因为前一天吃了一半之后-1个桃子；

正向：
nPerachNumber = nPerachNumber/2-1;
逆向：
nPerachNumber = (nPerachNumber+1)*2;

*/
int eat_peach(int nDay)
{
	int nCount = 1;
	for (int i = 1; i < nDay; i++)
	{
		nCount = (nCount + 1) * 2;

	}
	return nCount;

};








/*
*	wheil 循环练习
*/
void while_test()
{
	/*
	*	wheil 循环练习
	*/

	int nNumber = 0;
	while (nNumber < 10)
	{
		nNumber++;
		printf("while_test练习while循环,wile循环次数:%d\r\n", nNumber);
	}

};

/*
*	do wheil 循环练习
*/
int  do_while_test()
{
	int nNumber = 0;
	do
	{
		nNumber++;
		printf("while_test练习do while循环,do wile循环次数:%d\r\n", nNumber);
	} while (nNumber < 10);
	return 0;
};

/*
*	for 循环练习
*/
int  for_test()
{
	for (int i = 0; i < 10; i++)
	{
		printf("for_test练习for循环,for循环次数:%d\r\n", i);
	}
	return 0;
};


/*
*	while循环转goto
*
*	chatGPT总结goto可以用来做的事情：
*
*				用途							说明
*
*	1. 简单模拟循环结构				比如 for、while，可以用 goto手动控制跳转。
*	2. 异常处理（跳出多层嵌套）		遇到错误时快速跳到统一的错误处理区（常用在嵌套很深时）。
*	3. 提高局部流程效率（小范围内）	少数情况下，复杂的流程跳转，用 goto 比多层 if else 更清晰。
*	4. 程序清理收尾（资源释放）		出错时统一回收资源，比如文件句柄、内存释放等。
*
*/
int while_conversion_goto()
{
	int i = 0;

start:
	if (i >= 10) {
		goto end;
	}

	printf("%d\n", i);
	i++;
	goto start;

end:
	return 0;

};

/*
*	goto 替换for循环
*/
int for_conversion_goto()
{
	int i = 0;
start:
	if (i < 10) {
		printf("goto_替换for循环%d\n", i);
		i++;
		goto start;
	}
	return 0;

};
