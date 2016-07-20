/*求一个十进制的八进制数方法：
 *1、该数整除8后的余数为八进制的最后一位
 *2、将原数整除8的结果，再求整除8的余数，为倒数第二位。
 *3、依次类推，直到结果为0,运算结束。
 *4、还有一种简洁的方法：利用printf函数
 *5、printf("%o",number);注意%后跟的是字母o
 *6、上式直接出八进制数。
 */
#include <stdio.h>
int main(void)
{
	int i;
	printf("Enter a number:");
	scanf("%d",&i);
	printf("%1d%1d%1d%1d%1d\n",i/8/8/8/8%8,i/8/8/8%8,i/8/8%8,i/8%8,i%8);
	return 0;
}
