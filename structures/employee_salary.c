#include<stdio.h>
#include<string.h>
struct emp
{
	int id;
	char name[20];
	int basic;
	float hra;
	float da;
	float itax;
	float gsal;
	float netsal;
};
int main()
{
	struct emp e;
	printf("enter employee id:",e.id);
 	scanf("%d",&e.id);
	printf("enter employee name:",e.name);
	scanf("%s",&e.name);	
	printf("enter employee basic salary:",e.basic);
	scanf("%d",&e.basic);
	if(e.basic<=30000)
	{
		e.hra=((float)(e.basic*20)/100);
        	printf("the hra is %f\n",e.hra);
        	e.da=((float)(e.basic*10)/100);
        	printf("the DA is %f\n",e.da);
        	e.itax=((float)(e.basic*5)/100);
        	printf("the income tax is %f\n",e.itax);
	}
	else if(e.basic<=50000)
	{
		 e.hra=((float)(e.basic*25)/100);
        	 printf("the hra is %f\n",e.hra);
        	 e.da=((float)(e.basic*15)/100);
        	 printf("the DA is %f\n",e.da);
                 e.itax=((float)(e.basic*10)/100);
       		 printf("the income tax is %f\n",e.itax);
	}
	else if(e.basic<=100000)
	{
		 e.hra=((float)(e.basic*35)/100);
	         printf("the hra is %f\n",e.hra);
	         e.da=((float)(e.basic*20)/100);
        	 printf("the DA is %f\n",e.da);
        	 e.itax=((float)(e.basic*15)/100);
        	 printf("the income tax is %f\n",e.itax);
	}
	else if(e.basic>100000)
	{
		 e.hra=((float)(e.basic*40)/100);
	         printf("the hra is %f\n",e.hra);
 	         e.da=((float)(e.basic*25)/100);
	         printf("the DA is %f\n",e.da);
	         e.itax=((float)(e.basic*20)/100);
	         printf("the income tax is %f\n",e.itax);
	}
	else
	{
		printf("you have entered wrong details please check it once!\n");
		
	}
	e.gsal=e.basic+e.hra+e.da;
	e.netsal=e.gsal-e.itax;
	printf("the gross salary is %f\n",e.gsal);
	printf("the net salary of employee is %f\n",e.netsal);
	return 0;
}

