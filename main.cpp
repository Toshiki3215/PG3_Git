#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void hit(int* s)
{
	printf("������I\n");
}

void miss(int* s)
{
	printf("�͂���\n");
}

void setTimeout(PFunc p, int second)
{
	Sleep(second * 1000);

	p(&second);
}

int main()
{
	printf("������������'0 '�A���������'1 '����͂��Ă��������B\n");

	srand(time(nullptr));
	int daice = rand() % 6 + 1;

	int num;

	while (true)
	{
		scanf_s("%d", &num);

		if (num != 0 && num != 1)
		{
			printf("�G���[�A������x���͂��Ă�������\n");
			printf("������������'0 '�A���������'1 '����͂��Ă��������B\n");
		}
		else
		{
			break;
		}
	}

	PFunc p;

	if (daice % 2 == num)
	{
		p = hit;
	}
	else
	{
		p = miss;
	}
	setTimeout(p, 1);

	printf("��������̏o�ڂ� ' %d '\n", daice);


	return 0;
}