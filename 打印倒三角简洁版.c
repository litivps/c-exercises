#include <stdio.h>
int main(void)
{
	for(int i=4;i>=1;i--){
		for(int j=i;j>=1;j--){
			printf("* ");
		}
		printf("\n");
		for(int k=i-1;k<4;k++){
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
