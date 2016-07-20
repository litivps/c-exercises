#include <stdio.h>
int main(void)
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			sum = sum + i;
		}
	}

	printf("\n1到100内奇数之和=%d\n",sum);
	return 0;
}
