//input a sequence:"1-20.3-4.0e3",and test it,or ok
//scanf函数遇到一个不可能属于当前项的字符时，它会把此字符“放回原处”
//以便扫描下一个输入项或者下一次调用scanf函数时再次读入。
#include <stdio.h>
int main(void)
{
	int i,j;
	float k,l;
	printf("test scanf:");
	scanf("%d%d%f%f",&i,&j,&k,&l);
	printf("%d,%d,%f,%f\n",i,j,k,l);
	return 0;
}
