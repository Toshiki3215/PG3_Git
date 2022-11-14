#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void hit(int* s)
{
	printf("あたり！\n");
}

void miss(int* s)
{
	printf("はずれ\n");
}

void setTimeout(PFunc p, int second)
{
	Sleep(second * 1000);

	p(&second);
}

int main()
{
	printf("偶数だったら'0 '、奇数だったら'1 'を入力してください。\n");

	srand(time(nullptr));
	int daice = rand() % 6 + 1;

	int num;

	while (true)
	{
		scanf_s("%d", &num);

		if (num != 0 && num != 1)
		{
			printf("エラー、もう一度入力してください\n");
			printf("偶数だったら'0 '、奇数だったら'1 'を入力してください。\n");
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

	printf("さいころの出目は ' %d '\n", daice);


	return 0;
}