// c-study.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

struct point
{
	int x;
	int y;

};

int equal(point a, point b)
{
	if (a.x == b.x && a.y == b.y)
		return 1;
	else
		return 0;

}

int main()
{

	point a = { 1,2 };
	point b = { 3,4 };

	if (equal(a, b) == 1)
		printf("같은 점 \n");
	else
		printf("다른 점 \n");

	getchar();

	return 0;
}



