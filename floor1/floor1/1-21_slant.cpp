#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int x0, y0, a,b; //a�� ���� ,b�� ����
	int x1, y1;

	scanf("%d%d%d%d", &x0, &y0, &x1, &y1);
	if (x0 == 0 && x1 == 0) { 
		printf("%d %d", 0, y0);
	}
	else{
		a = (y1 - y0) / (x1 - x0);
		b = y0 - a * x0;

		printf("%d %d", a, b);
	}
	
	
	return 0;
}


/*

1.x0�� x1�� 0�� ��츦 �����ؾ��Ѵ�.

*/