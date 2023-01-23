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
	int timer = 3;

	printf("”š‚ğ‘ã“ü‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("‹ô”\n");
	}
	else if (num % 2 == 1)
	{
		printf("Šï”\n");
	}

	std::function<int()> lottery = [&daice]()
	{
		srand(time(nullptr));
		daice = rand() % 2;
		return daice;
	};

	std::function<void(std::function<void()>, const int)> setTimeOut = [=](std::function<void()> fx, int time)
	{
		Sleep(time * 1000);
		fx(); 
	};

	//‚ ‚½‚è‚©‚Í‚¸‚ê‚©
	std::function<void(char, int)>compation = [=](char input, int output) {
		input % 2 == output ? printf("“–‚½‚è\n") : printf("‚Í‚¸‚ê\n");
		printf("ƒ_ƒCƒX‚Í%d\n", daice);
	};

	setTimeOut(lottery, timer);
	compation(num, daice);

	system("pause");
	return 0;
}
