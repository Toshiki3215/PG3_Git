#include <functional>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include "windows.h"

int main()
{
	int dice;
	int result = 0;
	//‘Ò‚¿ŠÔ—p•Ï”
	int waitTime = 3000;

	printf("”š‚ğ‘ã“ü‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &dice);

	if (dice % 2 == 0)
	{
		printf("‹ô”\n");
	}
	else if (dice % 2 == 1)
	{
		printf("Šï”\n");
	}

	std::function<int()> lottery = [&result]()
	{
		srand(time(nullptr));
		result = rand() % 2;
		return result;
	};

	std::function<void(std::function<void()>, const int)> setTimeOut = [=](std::function<void()> fx, int time)
	{
		fx(); Sleep(time);
	};

	//‚ ‚½‚è‚©‚Í‚¸‚ê‚©
	std::function<void(char, int)>compation = [=](char input, int output) {
		input % 2 == output ? printf("“–‚½‚è\n") : printf("‚Í‚¸‚ê\n");
	};

	setTimeOut(lottery, waitTime);

	compation(dice, result);

	system("pause");
	return 0;
}
