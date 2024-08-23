#include<stdio.h>
#include<string.h>
struct emp  //now we are creating structure and its name 
{

//structure is defined as group of data types or data members
          int empid;
	  char name[20];
	  float salary;
	  char address[100];
};
int main()
{
	struct emp e;  //it is one employe details
	e.empid=12345;
	strcpy(e.name,"swaroop");
	e.salary=40000.00;
	strcpy(e.address,"old post office back side street,mudigubba");
	//now we are printing each variable
	printf("the employee id is %d\n",e.empid);
	printf("the employee name is %s\n",e.name);
	printf("the employee salary is %f\n",e.salary);
	printf("the employee address is %s\n",e.address);
	return 0;
}


