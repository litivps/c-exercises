//转化日期的表示格式
#include <stdio.h>
int main(void)
{
	int month,date,year;
	printf("input a date(mm/dd/yy):");
	scanf("%d/%d/%d",&month,&date,&year);
	printf("%4d%.2d%.2d\n",year,month,date);
	
	return 0;
}
