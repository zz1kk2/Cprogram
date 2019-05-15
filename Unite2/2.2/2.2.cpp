#include "pch.h"
#include <iostream>


/*例子2.-3
求华氏100F对应的摄氏温度，公式：c=5*(f-32)/9


*/
int main(void)
{
	int fahr, cel;		//华氏，摄氏
	fahr = 100;
	cel = 5 * (fahr - 32) / 9;


	printf("fahr=%d,cel=%d", fahr, cel);
	return 0;
}