#include "Enemy.h"

bool Enemy::isAlive = true;

void Enemy::Judgement()
{
	if (isAlive == true)
	{
		printf("敵は生きている\n");
	}
	else if (isAlive == false)
	{
		printf("敵を倒した\n");
	}
}