#include "pch.h"
#include <iostream>


/*����2.-3
����100F��Ӧ�������¶ȣ���ʽ��c=5*(f-32)/9


*/
int main(void)
{
	int fahr, cel;		//���ϣ�����
	fahr = 100;
	cel = 5 * (fahr - 32) / 9;


	printf("fahr=%d,cel=%d", fahr, cel);
	return 0;
}