#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int n, m, p, c,real,res;
	scanf("%d%d%d%d", &n, &m, &p, &c);

	res = (n + c) - (m + c - p); //n+c�� ���ͺб���,m+c�� �մ��� �� ��, p�� �մ��� �� ������

	printf("%d", res);


	return 0;
}