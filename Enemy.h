#pragma once

#pragma once
#include <stdio.h>
#include <stdlib.h>

class Enemy
{
public:
	
	void state1(); //�ߐ�
	void state2(); //�ˌ�
	void state3(); //���E

	void Update();

private:

	static void (Enemy::* stateChange[])();

private:

	int state = 0;

};
