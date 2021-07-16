#include<stdio.h>
int product(int,int);
int main()
{
    int a,b,ans;
    printf("enter a two number");
    scanf("%d%d",&a,&b);
    ans=product(a,b);
    printf("the product of two number is:%d",ans);
    return 0;
}
int product(int a,int b)
{
    int res;
    if(b==1)
    return a;
    else 
    res= a + product(a,b-1);
    return res;
}