#include<stdio.h>
int main()
{
   char ch = 's',*p;
   p = &ch;
   printf("value of ch is: %c\n",ch);
   printf("value stored at pointer p is: %c\n",*p);
   printf("address of the variable ch is: %x\n",&ch); 
   printf("p points to the address = %x\n",p);
   printf("address of the pointer p = %x\n",&p);
   return 0;
}
