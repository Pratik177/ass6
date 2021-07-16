#include<stdio.h>
int rev(int);
int main()
{
    int n,reverse;
    printf("enter a number:");
    scanf("%d",&n);
    reverse = rev(n);
    printf("the revese number is %d",reverse);
    return 0;
}
int rev(int num)
{ 
    int rem,z=1;
    if(num==0)
    
      return 0;
    
        for(int i=num;i>0;i/=10){
       rem = i % 10;
        z*=10;
    }
        return rem+rev(num%(z/10))*10;
}
