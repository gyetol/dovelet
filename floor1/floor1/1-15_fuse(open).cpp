#include<stdio.h>
#pragma warning (disable:4996)
#pragma warning (disable:4244) // 0.5 �����̱� ������ 2���ϸ� ������ ����

int main(void)
{
	int com, prt, rot;
	double res;
	int res1;
	scanf("%d%d%d", &com, &prt, &rot);

	res = com * 2.5 + prt * 2.0 + rot * 0.5;
	res1 = res * 2;
	if (res1 % 10 != 0) {
		res1 += 10;
		res1 = res1 - res1 % 10;
	}
	

	printf("%d amperes", res1);

	return 0;
}
///////////////////////////////////
/*

	�����ڸ� ������ %10
	�����ڸ� �ݿø��� 5�� ���ϰ� 10���� ������ �ٽ� 10�� ���Ѵ�
	�����ڸ� �ø��� 9�� ���ϰ� 10���� ������ �ٽ� 10�� ���Ѵ�

*/
///////////////////////////////////////