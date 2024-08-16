#include<stdio.h>
int main()
{
	 int num1,result;
	 printf("enter a number to check whether the number is even or odd:",num1);
	 scanf("%d",&num1);
	 result=num1%2;
	 if(result==0)
	 {
		 printf("%d is an even number",result);
	 }
        else
	{
		 printf("%d is an odd number",num1);
	}
}

