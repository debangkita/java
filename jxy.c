#include<stdio.h>
int main()
{
    int i,j,n2;
    printf("enter number of rows:");
    scanf("%d",&n2);
    for(i=n2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}