#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "D:\GitHub\CEN_Library\areaofCircle.h"


int main()
{
	int radius;
	double area;

	do
	{
		radius = getRadius();
		area = Area(radius);
		showResult(area);
	}

	while (Continue());

	return 0;
}

