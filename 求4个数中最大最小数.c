/*c语言现代p67
 * 求4个数中最大和最小数
 */
#include <stdio.h>
int main(void)
{
	int i1,i2,i3,i4;
	int max,min;
	printf("Enter 4 number:");
	scanf("%d %d %d %d",&i1,&i2,&i3,&i4);
	max=i1>i2?i1:i2;
	max=max>i3?max:i3;
	max=max>i4?max:i4;

	min=i1<i2?i1:i2;
	min=min<i3?min:i3;
	min=min<i4?min:i4;

	printf("max is %d\n",max);
	printf("min is %d\n",min);

	return 0;
}
