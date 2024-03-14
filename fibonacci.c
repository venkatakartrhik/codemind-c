#include<stdio.h>
int main()
{
    int n,c=2;
    scanf("%d",&n);
    int n0=0,n1=1,n2;
    printf("%d %d",n0,n1);
    while(c<n)
    {
        n2=n1+n0;
        n0=n1;
        n1=n2;
        printf(" %d",n2);
        c=c+1;
    }
}