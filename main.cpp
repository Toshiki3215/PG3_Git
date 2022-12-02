#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
	int val;
	struct cell* prev;
	struct cell* next;
}CELL;

void create(CELL* currentCell, int val);
void index(CELL* endCell);
CELL* getInsertCellAddress(CELL* endCell, int iterator);

int main()
{
	int iterator;
	int inputValue;
	CELL* insertCell;

	CELL head;
	head.next = nullptr;
	head.prev = nullptr;

	while (1)
	{
		printf("‰½”Ô–Ú‚ÌƒZƒ‹‚ÌŒã‚ë‚É‘}“ü‚µ‚Ü‚·‚©H\n");
		scanf_s("%d", &iterator);

		printf("‘}“ü‚·‚é’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &inputValue);

		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, inputValue);

		index(&head);
	}
	return 0;
}

void create(CELL *currentCell,int val)
{
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	currentCell->next = newCell;
}

void index(CELL *endCell)
{
	int no = 1;
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("%d", no);
		printf("%p", endCell->prev);
		printf("%5d", endCell->val);
		printf("(%p)", endCell);
		printf("%p\n", endCell->next);
		no++;
	}

}

CELL* getInsertCellAddress(CELL *endCell,int iterator)
{
	for (int i = 0; i < iterator; i++)
	{
		if (endCell->next)
		{
			endCell = endCell->next;
		}
		else
		{
			break;
		}
	}
	return endCell;
}