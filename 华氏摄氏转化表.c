#include <stdio.h>
int main(void)
{
	int lower=0;
	int higher=300;
	int huashi,sheshi;
	int step=20;

	printf("huashe\tsheshi\n");
	for(huashi=lower;huashi<=higher;huashi+=step)
	{
		sheshi=5*(huashi-32)/9;
		printf("%d\t%d\n",huashi,sheshi);
	}

	return 0;
}
