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

	//�����肩�͂��ꂩ
	std::function<void(char, int)>compation = [=](char input, int output) {
		input % 2 == output ? printf("������\n") : printf("�͂���\n");
		printf("�_�C�X��%d\n", result);
	};

	compation(num, result);

	system("pause");
	return 0;
}
