#include<stdio.h>
int sum(int);
int main()
{
    int a,res;
    printf("enter a  number :");
    scanf("%d",&a);
    res=sum(a);
    printf("the sum of number is:%4d",res);
    return 0;
}
int sum(int n )
{
    int sums;
    if (n ==0)
    return 0;
    else
    sums =n % 10 + sum(n / 10);
    return sums;
}