/*关系运算符和判等运算符的优先级
 * 算数运算符高于关系和判等运算符
 * 关系运算符高于判等运算符
 * 判等运算符高于赋值运算符
 */
#include <stdio.h>
int main(void)
{
	int i,j,k;
	i=2;j=3;
	k=i*j==6;
	printf("%d\n",k);
	i=5;j=10;k=1;
	printf("%d\n",k>i<j);
	i=3;j=2;k=1;
	printf("%d\n",i<j==j<k);
	i=3;j=4;k=5;
	printf("%d\n",i%j+i<4);
	
	return 0;
}
