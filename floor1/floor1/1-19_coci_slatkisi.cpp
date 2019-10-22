#include<stdio.h>
#pragma warning (disable:4996)

int exponent(int);

int main(void)
{
	int price, digit;
	scanf("%d%d", &price, &digit);
	printf("%d", (price + exponent(digit) * 5) / (exponent(digit) * 10)*(exponent(digit) * 10));


	return 0;
}

int exponent(int digit)
{
	int i;
	int res = 1;
	for (i = 1; i < digit; i++)
	{
		res = (res << 3) + (res << 1);
	}

	return res;
}// 0.18sec




//#include<stdio.h>
//
//int main(void)
//{
//	int price, digit;
//	int i;
//	int res = 1;
//	scanf("%d%d", &price, &digit);
//	
//	for (i = 1; i < digit; i++)
//	{
//		res *= 10;
//	}
//	printf("%d", (price + res * 5) / (res*10)*(res*10));
//
//
//	return 0;
//} //0.12sec


//////////////////////////////////////////////////////////////////////////////////
/*

1.pow��� ���̺귯���Լ��� �������� ������ش�

2.shift�����ڸ� �̿��ؼ� 10�� �����ִ� �ͺ��� �׳� 10�� �����ִ°� �� ������ (����... 10�� ���ϴ� �� 10�� ���ϴ� �������ٵ�..!!!!)

3.�Լ�ȣ�� �������ϴ� �Ŷ� ���ο��� �� �������� �Ŷ� �ӵ����̰� ����... (�ϴ� �̰� 3���ۿ� ȣ�� �������ϱ� �� ���� ��������)

*/

////////////////////////////////////////////////////////////////////////////////////
