#include <stdio.h>
int factorial(int n);
int main(void)
{
	int num;
	printf("input a number(<15):");
	scanf("%d",&num);
	int sum = factorial(num);
	printf("%d阶乘的结果是:%d\n",num,sum);

	return 0;
}

int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
