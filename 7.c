#include<stdio.h>
int fibo(int);
int main()
{
int n, m= 0, i;
printf("Enter Total terms:");
scanf("%d", &n);
printf("Fibonacci series terms are:");
for(i = 1; i <= n; i++)
{
printf("%2d", fibo(m));
m++;
}
return 0;
}
int fibo(int n)
{
if(n == 0 || n == 1)
return n;
else
return(fibo(n-1) + fibo(n-2));
}
