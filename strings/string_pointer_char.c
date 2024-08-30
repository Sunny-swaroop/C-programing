#include<stdio.h>
#include<string.h>
int main()
{
        char str[6][10]={
                {"sunny"},
                {"dileep"},
                {"shiva"},
                {"yeshwanth"},
                {"sai"},
                {"nanda"},
        };
	char *p;
        char *ptr[6];
        int i=0;
        while(i<6)
        {
                ptr[i]=str[i];
                i++;
        }
        int j=0;
        while(j<6)
        {
		p=ptr[j];
		while(*p!='\0')
		{
			printf("%c\n",*p);
			p++;
		}
                j++;
        }
        return 0;
}



