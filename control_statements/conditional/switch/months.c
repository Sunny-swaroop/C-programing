#include<stdio.h>
int main()
{
	int year;
	printf("choose the months  between 1 to 12 in a year\n");
	printf("1-january,2-febuary,3-march,4-apirl,5-may,6-june,7-july,8-august,9-septmber,10-october,11-november,12-december\n");
	printf("choose your option:",year);
	scanf("%d",&year);
	switch (year)
	{
		case 1:
			printf("january");
			break;
		case 2:
			printf("febuary");
			break;
		case 3:
			printf("march");
			break;
		case 4:
			printf("apirl");
			break;
		case 5:
			printf("may");
			break;
		case 6:
			printf("june");
			break;
		case 7:
			printf("july");
			break;
		case 8:
			printf("august");
			break;
		case 9:
			printf("septmber");
			break;
		case 10:
			printf("october");
			break;
		case 11:
			printf("november");
			break;
		case 12:
			printf("december");
			break;
		default:
			printf("you have choosed invalid option");
			break;
		}
	return 0;
}

