#include <stdio.h>
int main(void)
{
	int lower=0;
	int higher=300;
	int huashi,sheshi;
	int step=20;

	printf("huashe\tsheshi\n");
	huashi=lower;
	while(huashi<=higher)
	{
		sheshi=5*(huashi-32)/9;
		printf("%d\t%d\n",huashi,sheshi);
		huashi+=step;
	}

	return 0;
}
