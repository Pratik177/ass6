#include<stdio.h>
int power(int,int);
int main()
{
    int b,p,pow;
    printf("enter a two number ");
    scanf("%d%d",&b,&p);
    pow=power(b,p);
    printf("the power of %d is to  %d is:%d",b,p,pow);
    return 0;
}
int power(int b,int p)
{
    int f;
   if(p==0)
   return 1;
   else
   {
       f=b * power(b,p-1);
   }
   return f;

}

