//猜数字游戏1到100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{

	printf("****************\n");
	printf("****游戏菜单****\n");
	printf("***1.开始游戏***\n");
	printf("***0.结束游戏***\n");
	printf("****************\n");

}

void game()
{
	int guess = 0;
	int num = rand() % 100 + 1;
	int count = 5;
	while (count)
	{
		printf("请输入猜的数字：\n");
		scanf_s("%d",&guess);
		if (guess > num)
		{
			printf("很遗憾猜大了\n");
		}
		else if (guess < num)
		{
			printf("很遗憾猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
		count--;
		printf("还剩%d次机会\n",count);
	}
	if (count == 0)
	{
		printf("游戏失败正确答案是%d\n",num);
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;//放在循环外，否则为局部变量适用范围小
	do
	{
		menu();
		printf("请选择是否进行游戏\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}

	} while (input != 0);
	return 0;
}