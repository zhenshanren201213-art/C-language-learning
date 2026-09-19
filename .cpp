//随机数游戏进阶,猜数字游戏1到100
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()//菜单
{

	printf("******游戏菜单******");
	printf("*****1.开始游戏*****");
	printf("*****0.退出游戏*****");
}


void game()//游戏主体代码
{
	
	int num = rand() % 100 + 1;
	int guess = 0;
	int count = 8;
	while (count > 0)
	{
		printf("请输入猜的数字\n");
		scanf_s("%d", &guess);//%d后面不能有空格
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
			printf("恭喜你猜对了数字是 % d\n", num);
			break;
		}
		count--;
		printf("你还有 %d 次机会\n", count);
		
	}
	if (count == 0)
	{
		printf("次数用光游戏失败");
		printf("正确答案是 %d\n", num);
	}
}

int main()
{
	srand((unsigned int)time(NULL));//最好写在main函数里
	int input = 0;
	do 
	{
		menu();
		printf("请输入\n");
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
	} while (input!=0);
	return 0;
}
