#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i,j=1;i<=a,j<=4*a;i++)
    {
        printf("%d %d %d PUM\n",j,j+1,j+2);
        j=j+4;
    }

    return 0;
}
