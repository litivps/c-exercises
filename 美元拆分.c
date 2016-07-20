/*输入一个美元数，然后列出最佳的答案
 *至少多少张20的，多少张10块的，多少张5块的,多少张1块的。
*/
#include <stdio.h>
int main(void)
{
	int number,yuan20,yuan10,yuan5,yuan1;
	printf("input a meiyuan:");
	scanf("%d",&number);
	yuan20=number/20;
	yuan10=(number-yuan20*20)/10;
	yuan5=(number-yuan20*20-yuan10*10)/5;
	yuan1=number-yuan20*20-yuan10*10-yuan5*5;
	printf("%d 20meiyuan\n",yuan20);
	printf("%d 10meiyuan\n",yuan10);
	printf("%d 5meiyuan\n",yuan5);
	printf("%d 1meiyuan\n",yuan1);
	return 0;
}
