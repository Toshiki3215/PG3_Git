#include <functional>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include "windows.h"

int main()
{
	int num;
	int daice = 0;
	int second = 3;

	printf("数字を代入してください\n");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("偶数\n");
	}
	else if (num % 2 == 1)
	{
		printf("奇数\n");
	}

	std::function<int()> lottery = [&daice]()
	{
		srand(time(nullptr));
		daice = rand() % 2;
		return daice;
	};

	std::function<void(std::function<void()>, const int)> setTimeOut = [=](std::function<void()> fx, int secomd)
	{
		Sleep(second * 1000);
		fx(); 
	};

	//あたりかはずれか
	std::function<void(char, int)>compation = [=](char input, int output) {
		input % 2 == output ? printf("当たり\n") : printf("はずれ\n");
		printf("ダイスは%d\n", daice);
	};

	setTimeOut(lottery, 3);
	compation(num, daice);

	system("pause");
	return 0;
}
