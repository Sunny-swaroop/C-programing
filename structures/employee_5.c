#include<stdio.h>
#include<string.h>
struct emp
{
	int id;
	char name[10];
	float salary;
	char address[50];
};
int main()
{
	struct emp e[5];
	int i;
	printf("enter 5 employee details\n");
	for(i=0;i<5;i++)
	{
		printf("id:\n");
		scanf("%d",&e[i].id);
		printf("name:\n");
		scanf("%s",&e[i].name);
		printf("salary:\n");
		scanf("%f",&e[i].salary);
		printf("address:\n");
		scanf("%s",&e[i].address);
	}
	for(i=0;i<5;i++)
	{
		printf("the employee id is %d\n",e[i].id);
		printf("the employee name is %s\n",e[i].name);
		printf("the employee salary is %f\n",e[i].salary);
		printf("the employee address is %s\n",e[i].address);
	}
	return 0;
}


