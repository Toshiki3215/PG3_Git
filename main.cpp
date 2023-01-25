#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include "Circle.h"
#include "IShape.h"
#include "Rectangle.h"

int main()
{
	IShape* shapes[2];

	shapes[0] = new Circle;
	shapes[1] = new Rectangle;

	//‰~
	shapes[0]->size();
	shapes[0]->draw();

	//‹éŒ`
	shapes[1]->size();
	shapes[1]->draw();

	delete shapes[0];
	delete shapes[1];

	system("pause");
	return 0;
}