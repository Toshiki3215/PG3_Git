#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include"Enemy.h"

int main()
{

	Enemy* enemy  = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	int isAction = 0;

	while (true)
	{

		printf("“G‚ª‚R‘ÌŒ»‚ê‚½\n");
		printf("‚Ç‚¤‚·‚éH@“|‚·F‚P,‰½‚à‚µ‚È‚¢F‚Q\n");
		scanf_s("%d", &isAction);

		switch (isAction)
		{
		case 1:
			Enemy::isAlive = false;
			enemy->Judgement();
			enemy2->Judgement();
			enemy3->Judgement();

			break;

		case 2:
			Enemy::isAlive = true;
			enemy->Judgement();
			enemy2->Judgement();
			enemy3->Judgement();

			break;
		}

		Sleep(1 * 1000);

	}

	delete enemy;
	delete enemy2;
	delete enemy3;

	system("pause");
	return 0;
}