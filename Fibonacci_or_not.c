#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,n3=0,c=0;
    scanf("%d",&n);
    while(n3<n)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n3==n)
        {
            c=c+1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}