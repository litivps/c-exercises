/*switch语句的应用
 */
#include <stdio.h>
int main(void)
{
	int area_code;
	printf("Enter a area code:");
	scanf("%d",&area_code);

	switch(area_code){
		case 229:	printf("The city is Albany.\n");
					break;
		case 404:	case 470:	case 770:
					printf("The city is Atlanta.\n");
					break;
		case 478:	printf("The city is Macon.\n");
					break;
		case 706:	case 762:
					printf("The city is Columbus.\n");
					break;
		case 912:	printf("The city is Savannah.\n");
					break;
		default:
					printf("Area code not recognized.\n");
					break;
	}

	return 0;
}
