/*24小时制转12小时制
 */
#include <stdio.h>
int main(void)
{
	int hour,min;
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&hour,&min);
	if(hour>12){
		hour%=12;
	}
	printf("Equivalent 12-hour time:%.2d:%.2d\n",hour,min);

	return 0;
}
