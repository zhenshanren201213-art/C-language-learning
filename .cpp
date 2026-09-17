////打印100到200之间的素数
//#include<stdio.h>
//int main()
//{
//	for (int i = 101;i <= 200;i += 2)
//	{
//		int flag = 1;
//		for (int j = 3;j * j <= i;j += 2)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}



//生成1到100的随机数并打印
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));
	num = rand() % 100 + 1;
	printf("%d\n",num);
	return 0;
}

