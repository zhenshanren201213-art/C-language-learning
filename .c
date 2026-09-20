//猜数字游戏1到100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("********************\n");
	printf("*****猜数字游戏*****\n");
	printf("******1.开始游戏****\n");
	printf("******0.结束游戏****\n");
	printf("********************\n");

}

void game()
{
	int num = rand() % 100 + 1;
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("请输入猜的数字：\n");
		scanf_s("%d", &guess);//在循环中确保每次都可输入
		if (guess > num)
		{
			printf("很遗憾猜大了");
		}
		else if (guess < num)
		{
			printf("很遗憾猜小了");
		}
		else
		{
			printf("恭喜你猜对了");
			break;
		}
		count--;
		printf("你还剩%d次机会\n",count);//----再次写有问题的地方
	}
	if (count == 0)//----再次写有问题的地方
	{
		printf("很遗憾你没有猜中");
		printf("正确答案是：%d\n",num);
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	//----menu();再次写有问题的地方
	int input = 0;
	do 
	{
		menu();//menu放循环里
		printf("请选择是否进行游戏\n");// 放循环里
		scanf_s("%d", &input);//放循环里，以此实现多次输入是否游玩
		switch (input)//switch是一定会执行的，他是根据输入多少找到相应case后的值进行选择执行
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入");
			break;
		}
	} while (input!=0);//----再次写有问题的地方
	return 0;
}
