#include "Rectangle.h"
#include<iostream>

void Rectangle::size()
{
	int height = 4;
	int width = 5;

	area = height * width;

	printf("%d * %d = %d\n", height, width,area);
}

void Rectangle::draw()
{
	printf("��`�̖ʐς�%d\n", area);
}