#include<stdio.h>
int main()
{
    int a,n,m,i,c;
    scanf("%d %d",&n,&m);
    a=(n<m)?m:n;
    for(i=1;i<=a;i++)
    {
        if((n%i==0) && (m%i==0))
        {
            c=i;
        }
    }
    printf("%d",c);
}