//格式化输出结果，做的时候，别看程序，只看结果，自己看这结果推算程序。
#include <stdio.h>
int main(void)
{
	int item_number;
	float unit_price;
	int month,date,year;
	printf("Enter item number:");
	scanf("%d",&item_number);
	printf("Enter unit price:");
	scanf("%f",&unit_price);
	printf("Enter purchase date (mm/dd/yyy):");
	scanf("%d/%d/%d",&month,&date,&year);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%-d\t%6.2f\t%.2d/%.2d/%.4d\n",item_number,unit_price,month,date,year);
	return 0;
}
