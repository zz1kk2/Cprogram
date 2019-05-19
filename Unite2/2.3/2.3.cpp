#include "pch.h"
#include <iostream>
#include <stdio.h>

/*例子2-4
	居民交水费y（元），月用水x（吨）的函数关系如下
	当x<=15时，(4x)/3

	当x>15时，2.5x-10.5

*/

int main(void)
{
	double x, y;


	scanf("%lf",&x);
	if (x <= 15) {
		y = (4*x) / 3;
	}
	else {
		y = 2.5*x - 10.5;
	}

	printf("这个月的水费为 %f", y);

	return 0;
}
