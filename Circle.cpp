#include "Circle.h"
#include<iostream>

void Circle::size()
{
	float radius = 1;
	float pi = 3.14;

	area = radius * pi;

	printf("%f * %f = %f\n", radius, pi,area);
}

void Circle::draw()
{
	printf("â~ÇÃñ êœÇÕ%f\n", area);
}