/*十进制化为八进制普通版。
 * 注意这种关联变量的双层for循环的用法
 *
 */
#include <stdio.h>
int main(void)
{
	int number;
	int jinzhi=8;
	int weishu=5;
	printf("Enter a number(5wei):");
	scanf("%d",&number);
	printf("%o\n",number);
	for(int i=weishu;i>=1;i--){
		int temp=number;
		for(int j=i-1;j>=1;j--){
			temp/=jinzhi;
		}
		temp%=jinzhi;
		printf("%d",temp);
		
	}
	printf("\n");
	return 0;
}
