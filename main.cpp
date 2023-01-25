#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include"Enemy.h"

int main()
{
	Enemy* enemy = new Enemy;

	while (true) {

		enemy->Update();

		Sleep(1 * 1000);

	}

	delete enemy;

	system("pause");
	return 0;
}