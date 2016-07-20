//求球的体积
#include <stdio.h>
#define	pi 3.14159

int main(void)
{
	int r;
	float volume;
	printf("input a r of ball:");
	scanf("%d",&r);
	volume=(4.0f/3.0f) * pi * r*r*r;
	printf("volume of ball :%f\n",volume);

	return 0;
}
