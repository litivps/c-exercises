//反转一个三位数
#include <stdio.h>
int main(void)
{
	int number;
	printf("Enter a tow-digit number:");
	scanf("%d",&number);
	printf("%d%d%d\n",(number%100)%10,(number/10)%10,number/100);
	return 0;
}
