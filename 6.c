
#include<stdio.h>
int fact(int);
int main()
{
    int n,facto;
    printf("enter a number ");
    scanf("%d",&n);
    facto=fact(n);
    printf("the factorial of %d is:%d",n,facto);
    return 0;
}
int fact(int n)
{
    if (n == 0) return 1;
    else{
    return (n*fact(n-1));}
}