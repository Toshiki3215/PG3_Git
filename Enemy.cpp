#include "Enemy.h"

bool Enemy::isAlive = true;

void Enemy::Judgement()
{
	if (isAlive == true)
	{
		printf("�G�͐����Ă���\n");
	}
	else if (isAlive == false)
	{
		printf("�G��|����\n");
	}
}