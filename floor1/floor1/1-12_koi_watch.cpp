#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int hour, min, sec;
	int cooktime;
	int h, m, s;

	scanf("%d%d%d%d", &hour, &min, &sec, &cooktime);

	h = cooktime / 3600;
	hour += h;
	hour %= 24;
	m = cooktime % 3600 / 60;
	min += m;
	if (min >= 60) { 
		hour += 1;
		min -= 60;
	}
	s = cooktime % 3600 % 60;
	sec += s;
	if (sec >= 60) {
		min += 1;
		sec -= 60;
	}

	//hour += cooktime / 3600;
	//if(hour>=24){}
	//min += (cooktime - cooktime / 3600 * 3600) / 60;
	//sec += cooktime - ((cooktime - cooktime / 3600 * 3600) / 60 * 60);

	//if (sec >= 60) { 
	//	min += 1; 
	//	sec -= 60;
	//}
	//if (min >= 60) { 
	//	hour += 1; 
	//	min -= 60;
	//}
	
	printf("%d %d %d", hour, min, sec);
	return 0;
}
///////////////////////////////////////////////////
/*
	1.60������ ������ ������ �� �� �ʸ� ���ϴ� �ͱ����� ��������, 
	�����ð��� ���� �� �� �ʸ� ���ϸ� 60�� �ٽ� �ʰ��� �� �ֱ⶧���� �� �κ��� �Ű����Ѵ�.

	2. 24�ø� �Ѿ�� ��� 0�÷� ���ƿ´�.

	3. ���������� �� �ø��� �ڵ尡 ������� �� �ִ�

	4. ������ ������Ȱ��


*/
///////////////////////////////////////////////////