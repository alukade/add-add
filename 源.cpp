#include<stdio.h>
int main()
{
	int i = 5, j;
	j = ++i;//��ӣ�i�ȼ�1Ȼ��ֵ��j
	printf("i=%d,j=%d\n", i, j);

	i = 5;
	j = i++;//�Ҽӣ�i�ȸ�ֵ��j��i���Լ�
	printf("i=%d,j=%d\n", i, j);

	return 0;
}
