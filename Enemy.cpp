#include "Enemy.h"

bool Enemy::isAlive = true;

void Enemy::Judgement()
{
	if (isAlive == true)
	{
		printf("“G‚Í¶‚«‚Ä‚¢‚é\n");
	}
	else if (isAlive == false)
	{
		printf("“G‚ğ“|‚µ‚½\n");
	}
}