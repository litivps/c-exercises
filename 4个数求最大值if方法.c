/*四个数求最大值，if方法
 */
#include <stdio.h>
int main(void)
{
	int i1,i2,i3,i4;
	int max1,max2,max;
	printf("Enter 4 numbers:");
	scanf("%d %d %d %d",&i1,&i2,&i3,&i4);

	if(i1>i2) max1=i1;
	else	max1=i2;
	if(max1>i3) max2=max1;
	else	max2=i3;
	if(max2>i4)	max=max2;
	else	max=i4;
	printf("max is %d\n",max);

	return 0;
}
