#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int z=x+y;
        printf("%d
",z);
    }
}