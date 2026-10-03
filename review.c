//猜数字游戏1-100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("****************\n");
	printf("****游戏菜单****\n");
	printf("***1.开始游戏***\n");
	printf("***2.结束游戏***\n");
	printf("****************\n");
}


void game()
{
	int num = 0;
	num = rand() % 100 + 1;
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("请输入猜的数字\n");
		scanf_s("%d",&guess);
		if (guess > num)
		{
			printf("猜大了\n");
			count--;
		}
		else if (guess < num)
		{
			printf("猜小了\n");
			count--;
		}
		else
		{
			printf("恭喜才对正确答案是%d\n",num);
			break;
		}
		if (count == 0)
		{
			printf("遗憾猜错正确答案是%d\n", num);
		}
	}
}


int main()
{

	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择是否进行游戏\n");
		scanf_s("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误请重新输入\n");
		}
	} while (input);
	return 0;
}