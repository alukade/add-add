#include<stdio.h>
int main()
{
	int i = 5, j;
	j = ++i;//左加：i先加1然后赋值给j
	printf("i=%d,j=%d\n", i, j);

	i = 5;
	j = i++;//右加：i先赋值给j，i再自加
	printf("i=%d,j=%d\n", i, j);

	return 0;
}
