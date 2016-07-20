//scanf模拟分数的加法
#include <stdio.h>
int main(void)
{
	int n1,d1,n2,d2,result_n,result_d;
	printf("Enter two number:");
	scanf("%d/%d+%d/%d",&n1,&d1,&n2,&d2);
	result_n=n1*d2+n2*d1;
	result_d=d1*d2;
	printf("The sum is %d/%d\n",result_n,result_d);
	return 0;
}
