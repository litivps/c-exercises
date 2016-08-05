/*c语言现代方法：p67
 * 根据风力大小来命名
 */
#include <stdio.h>
int main(void)
{
	int wind_rate;
	printf("Enter the wind rate:");
	scanf("%d",&wind_rate);
	if(wind_rate<1){
		printf("Calm\n");
	}
	else if(wind_rate<=3){
		printf("Light air\n");
	}
	else if(wind_rate<=27){
		printf("Breeze\n");
	}
	else if(wind_rate<=47){
		printf("Gale\n");
	}
	else if(wind_rate<=63){
		printf("Storm\n");
	}
	else{
		printf("Hurricane\n");
	}
	
	return 0;
}
