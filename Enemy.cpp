#include "Enemy.h"

void (Enemy::* Enemy::stateChange[])() =
{
	&Enemy::state1, //‹ßÚ
	&Enemy::state2, //ËŒ‚
	&Enemy::state3  //—£’E

};

void Enemy::state1()
{
	printf("-----“G‚Ìs“®-----\n");
	printf("`‹ßÚ`\n");
}

void Enemy::state2()
{
	printf("-----“G‚Ìs“®-----\n");
	printf("`ËŒ‚`\n");
}

void Enemy::state3()
{
	printf("-----“G‚Ìs“®-----\n");
	printf("`—£’E`\n");
}

void Enemy::Update()
{
	(this->*stateChange[state])();

	state++;

	if (state > 2)
	{
		state = 0;
	}

}