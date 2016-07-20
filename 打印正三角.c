#include <stdio.h>
#define	NUM 70
int main(void)
{
	int m=NUM,n=NUM;
	for(int i=1;i<=m;i++)
	{
		n--;
		for(int j=1;j<=n;j++)
		{
			printf(" ");
		}
		for(int k=n;k<m;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
