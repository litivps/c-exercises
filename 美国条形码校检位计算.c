//计算美国条形码的校检位：共12位，1,3,5,7,9,11位相加，2,4,6,8,10位相加，
//奇数位相加的结果乘以3,再和偶数位之和相加，上述结果减1,
//相减后的结果除以10取余数，最后用9减去上步得到的余数，结果为校减位。
#include <stdio.h>
int main(void)
{
	int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;
	printf("Enter the first (single) digit:");
	scanf("%1d",&d);
	printf("Enter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
	printf("Enter second group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
	first_sum=d+i2+i4+j1+j3+j5;
	second_sum=i1+i3+i5+j2+j4;
	total=first_sum*3+second_sum-1;
	printf("the check digit=%d\n",9-total%10);
	return 0;
}
