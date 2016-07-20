//反转一个两位数，输入28,输出82
#include <stdio.h>
int main(void)
{
	int number;
	printf("Enter a tow-digit number:");
	scanf("%d",&number);
	printf("%d%d\n",number%10,number/10);
	return 0;
}
