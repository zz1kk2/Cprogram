#include "pch.h"
#include <iostream>
#include <stdio.h>

/*����2-4
	����ˮ��y��Ԫ��������ˮx���֣��ĺ�����ϵ����
	��x<=15ʱ��(4x)/3

	��x>15ʱ��2.5x-10.5

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

	printf("����µ�ˮ��Ϊ %f", y);

	return 0;
}
