#include<stdio.h>
int reverse(int num)
{
    int rev=0,d;
    while(num)
    {
       d=num%10;
       rev=rev*10+d;
       num=num/10;
    }
    return rev;
}
int main()
{
    int n,r,s1,s2;
    scanf("%d",&n);
    r=reverse(n);
    s1=n*n;
    s2=r*r;
    if(s1==reverse(s2))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}