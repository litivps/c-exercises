/*如果输入“2,5”则会错误，只有"2 5"才是正确的*/
#include <stdio.h>
int main(void)
{
	int i,j;
	printf("test scanf:");
	scanf("%d%d",&i,&j);
	printf("%d %d\n",i,j);

	return 0;
}
