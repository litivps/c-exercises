/*c语言现代p67
 * 根据收入计算所得税
 */
#include <stdio.h>
int main(void)
{
	float shou,zhi;
	printf("Enter your shou:");
	scanf("%f",&shou);
	if(shou<750.00f){
		zhi=shou*0.01f;
		printf("<750\n");
	}
	else if(shou<2250.00f){
		zhi=7.50f+(shou-750.00f)*0.02f;
		printf("750-2250\n");
	}
	else if(shou<3750.00f){
		zhi=37.50f+(shou-2250.00f)*0.03f;
		printf("2250-3750\n");
	}
	else if(shou<5250.00f){
		zhi=82.50f+(shou-3750.00f)*0.04f;	
		printf("3750-5250\n");
	}
	else if(shou<7000.00f){
		zhi=142.50f+(shou-5250.00f)*0.05f;
		printf("5250-7000\n");
	}
	else{
		zhi=230.00f+(shou-7000.00f)*0.06f;
		printf(">7000\n");
	}
	printf("zhi chu wei %.2f\n",zhi);
	

	return 0;
}
