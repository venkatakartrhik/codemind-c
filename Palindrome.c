#include<stdio.h>
int main()
{
    int n,d,t,rev=0;
    scanf("%d",&n);
    t=n;
    while (n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}