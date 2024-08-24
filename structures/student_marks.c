#include<stdio.h>
#include<string.h>
struct student
{
	int roll_num;
	char name[20];
	int  subjects[6];
	int total;
	float avg;
	char result[6];
	char grade[18];
};
int main()
{
	struct student s;
	int i;
	printf("enter student roll number:",s.roll_num);
	scanf("%d",&s.roll_num);
	printf("enter the name of the student:",s.name);
	scanf("%s",s.name);
	s.total=0;
	for(i=0;i<6;i++)
	{
		printf("enter the marks for each subject %d:",i+1);
		scanf("%d",&s.subjects[i]);
		s.total=s.total+s.subjects[i];
		printf("the total marks of student is %d\n",s.total);
	}
	
	for(i=0;i<6;i++)
	{
		printf("enter the marks for each subject %d:",i+1);
		printf("%d\n",s.subjects[i]);
	}
	if(s.subjects[0]<35||s.subjects[1]<35||s.subjects[2]<35||s.subjects[3]<35||s.subjects[4]<35||s.subjects[5]<35)
	{
		strcpy(s.result,"FAIL");
		printf("the student %s is failed %s\n",s.name,s.result);
		strcpy(s.grade,"NILL"); 
	}
	else
	{
		strcpy(s.result,"PASS");
		printf("the student %s is passed %s\n",s.name,s.result);
	        s.avg=s.total/6.0;
       	        printf("the average of student is %f\n",s.avg);

		if(s.avg>60)
		{
			strcpy(s.grade,"FIRST CLASS");
		}
		else if(s.avg>50)
		{
			strcpy(s.grade,"SECOND CLASS");
		}
		else
		{
			strcpy(s.grade,"THIRD CLASS");
		}
//	printf("the grade of student %s is %s\n",s.name,s.grade);
	}
	
	printf("the grade of student %s is %s\n",s.name,s.grade);
	return 0;
}

	


