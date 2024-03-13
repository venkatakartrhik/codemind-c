#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int c=0;
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            c=c+1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else{
        printf("False");
    }

}
