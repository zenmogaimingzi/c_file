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
	}
}