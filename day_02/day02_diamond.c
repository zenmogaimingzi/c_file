#include <stdio.h>

/*


ѧϰ���ι�ʽ ��ӡ����
ѧϰѭ������


//      5      *
//      4    *	 *
//      3  *	   *
//      2    *	 *
//      1	   *
//       0 1 2 3 4 5        x
//

  ��ʽ��a * x + c = y

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


	//	������ӳ�������
	int number = eat_peach(10);
	printf("����������%d", number);




	//ѧϰѭ��
	for_test();

	while_conversion_goto();

	do_while_test();

	for_test();

	for_conversion_goto();

};

/*
һֻС����һ��ժ��������ӣ���һ�����һ�룬Ȼ���̲�ס�ֳ���һ����
�ڶ����ֳ���һ�룬�ټ���һ����
����ÿ�춼�������ԡ�
����10���ʱ��С���ӷ���ֻ��һ�������ˡ�
��С���ӵ�һ�칲ժ�˶��ٸ����ӡ�


(nCount+1)*2 ����ǰһ���������

��Ϊǰһ�����һ��֮��-1�����ӣ�

����
nPerachNumber = nPerachNumber/2-1;
����
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
*	wheil ѭ����ϰ
*/
void while_test()
{
	/*
	*	wheil ѭ����ϰ
	*/

	int nNumber = 0;
	while (nNumber < 10)
	{
		nNumber++;
		printf("while_test��ϰwhileѭ��,wileѭ������:%d\r\n", nNumber);
	}

};

/*
*	do wheil ѭ����ϰ
*/
int  do_while_test()
{
	int nNumber = 0;
	do
	{
		nNumber++;
		printf("while_test��ϰdo whileѭ��,do wileѭ������:%d\r\n", nNumber);
	} while (nNumber < 10);
	return 0;
};

/*
*	for ѭ����ϰ
*/
int  for_test()
{
	for (int i = 0; i < 10; i++)
	{
		printf("for_test��ϰforѭ��,forѭ������:%d\r\n", i);
	}
	return 0;
};


/*
*	whileѭ��תgoto
*
*	chatGPT�ܽ�goto���������������飺
*
*				��;							˵��
*
*	1. ��ģ��ѭ���ṹ				���� for��while�������� goto�ֶ�������ת��
*	2. �쳣�����������Ƕ�ף�		��������ʱ��������ͳһ�Ĵ���������������Ƕ�׺���ʱ����
*	3. ��߾ֲ�����Ч�ʣ�С��Χ�ڣ�	��������£����ӵ�������ת���� goto �ȶ�� if else ��������
*	4. ����������β����Դ�ͷţ�		����ʱͳһ������Դ�������ļ�������ڴ��ͷŵȡ�
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
*	goto �滻forѭ��
*/
int for_conversion_goto()
{
	int i = 0;
start:
	if (i < 10) {
		printf("goto_�滻forѭ��%d\n", i);
		i++;
		goto start;
	}
	return 0;

};
