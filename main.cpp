#include <functional>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include "windows.h"

int main()
{
	int num;
	int result = 0;
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

	std::function<int()> lottery = [&result]()
	{
		srand(time(nullptr));
		result = rand() % 2;
		return result;
	};

	std::function<void(std::function<void()>, const int)> setTimeOut = [=](std::function<void()> fx, int secomd)
	{
		fx(); Sleep(second * 1000);
	};

	setTimeOut(lottery, 3);

	//あたりかはずれか
	std::function<void(char, int)>compation = [=](char input, int output) {
		input % 2 == output ? printf("当たり\n") : printf("はずれ\n");
		printf("ダイスは%d\n", result);
	};

	compation(num, result);

	system("pause");
	return 0;
}
