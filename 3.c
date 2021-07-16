#include<stdio.h>
int num(int);
int main()
{
    int n,res;
    printf("enter a number ");
    scanf("%d",&n);
    res = num(n);
    printf("the sum of natural number is %d\n",res);
    return 0;
}
int num(int n)
{
    int sum;
    if(n==1)
    return (1);
    else 
    {
        sum = n + num(n-1);
    }
    return sum;

}