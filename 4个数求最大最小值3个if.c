#include <stdio.h>
int main(void)
{
	int i1,i2,i3,i4;
	int max1,max2,max,min1,min2,min;
	printf("Enter 4 numbers:");
	scanf("%d %d %d %d",&i1,&i2,&i3,&i4);
	if(i1>i2){
		max1=i1;
		min1=i2;
	}
	else{
		max1=i2;
		min1=i1;
	}
	if(i3>max1){
		max2=i3;
		min2=min1;
	}
	else{
		max2=max1;
		min2=i3>min1?min1:i3;
	}
	if(i4>max2){
		max=i4;
		min=min2;
	}
	else{
		max=max2;
		min=i4>min2?min2:i4;
	}
	printf("max=%d,min=%d\n",max,min);

	return 0;
}
