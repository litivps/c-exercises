/*计算交易佣金
 * 低于2500 30+1.7%
 * 2500-6250 56+0.66%
 * 6250-20000 76+0.34%
 * 20000-50000 100+0.22%
 * 50000-500000 155+0.11%
 * 500000以上 255+0.09%
 * 最低收费39元。
 */
#include <stdio.h>
int main(void)
{
	float commission,value;
	printf("Enter value of trade:");
	scanf("%f",&value);
	if(value<2500)	commission=30+value*1.7/100;
	else if(value<6250)	commission=56+value*0.66/100;
	else if(value<20000)	commission=76+value*0.34/100;
	else if(value<50000)	commission=100+value*0.22/100;
	else if(value<500000)	commission=155+value*0.11/100;
	else	commission=255+value*0.09/100;
	if(commission<39)	commission=39;
	printf("commission:%.2f\n",commission);
	return 0;
}
