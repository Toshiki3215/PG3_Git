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

	printf("�����������Ă�������\n");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("����\n");
	}
	else if (num % 2 == 1)
	{
		printf("�\n");
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

	//�����肩�͂��ꂩ
	std::function<void(char, int)>compation = [=](char input, int output) {
		input % 2 == output ? printf("������\n") : printf("�͂���\n");
		printf("�_�C�X��%d\n", daice);
	};

	setTimeOut(lottery, timer);
	compation(num, daice);

	system("pause");
	return 0;
}
