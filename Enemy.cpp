#include "Enemy.h"

void (Enemy::* Enemy::stateChange[])() =
{
	&Enemy::state1, //�ߐ�
	&Enemy::state2, //�ˌ�
	&Enemy::state3  //���E

};

void Enemy::state1()
{
	printf("-----�G�̍s��-----\n");
	printf("�`�ߐځ`\n");
}

void Enemy::state2()
{
	printf("-----�G�̍s��-----\n");
	printf("�`�ˌ��`\n");
}

void Enemy::state3()
{
	printf("-----�G�̍s��-----\n");
	printf("�`���E�`\n");
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