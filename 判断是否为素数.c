#include <stdio.h>
int main(void)
{
	int num;
	printf("input a number:");
	scanf("%d",&num);
	for(int i=2;i<num;i++)
	{
		if(num%i == 0)
		{
			printf("%d is not a sushu\n",num);
			return 0;
		}
	}
	printf("%d is a sushu\n",num);
	return 0;
}
