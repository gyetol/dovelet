#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int height, width, area;
	//printf("���簢���� ���̸� �Է��Ͻÿ�:");
	scanf("%d", &height);
	//printf("���簢���� �ʺ� �Է��Ͻÿ�:");
	scanf("%d", &width);
	
	area = height * width;
	//printf("���簢���� ���̴� %d�Դϴ�.\n", area);
	printf("%d\n", area);

	return 0;
}