/*利用逻辑表达式的值来确定2个数的大小关系。
 */
#include <stdio.h>
int main(void)
{
	int i,j;
	int result;
	printf("Enter a num(i):");
	scanf("%d",&i);
	printf("Enter a num(j):");
	scanf("%d",&j);
	printf("i=%d\tj=%d\n",i,j);
	printf("i>j\t=1\ni=j\t=0\ni<j\t=-1\n");
	
	result=(i>=j)-(i<=j);   //主要的计算在这里

	printf("result is %d\n",result);

	return 0;
}
