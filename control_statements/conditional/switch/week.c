#include<stdio.h>
int main()
{
	int week;
	printf("choose your input number in between 1 to 7 1-sunday,2-monday,3-tuesday,4-wednsday,5-thursday,6-friday,7-saturday\n");
	printf("enter your choice:",week);
	scanf("%d",&week);
	switch (week)
	{
		case 1:
			printf("Sunday\n");
			break;
		case 2:
			printf("monday\n");
			break;
		case 3:
			printf("tuesday\n");
			break;
		case 4:
			printf("wednsday\n");
			break;
		case 5:
			printf("thursday\n");
			break;
		case 6:
			printf("friday\n");
			break;
		case 7:
			printf("saturday\n");
			break;
		default:
			printf("invalid!! choose your option  between 1 to 7 1-sunday,2-monday,3-tuesday,4-wednsday,5-thursday,6-friday,7-saturday\n");
			break;
		}
	return 0;
}

