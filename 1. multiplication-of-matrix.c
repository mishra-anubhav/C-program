#include <stdio.h>
#include <stdlib.h>
void sum(int a[12][12],int b[12][12],int ,int);
void multiply(int a[12][12],int b[12][12],int ,int  );
void main(int argc, char** argv) {
    int a[12][12],b[12][12];
    int i,j,k,c,r;
    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("\n Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    printf("The 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    sum(a,b,r,c);
    multiply(a,b,r,c);
}



void multiply(int a[12][12],int b[12][12],int r,int c)
{

    int mul[12][12],i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    printf("The product of two matrices\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}

void sum(int a[12][12],int b[12][12],int r,int c)
{
    int sum[12][12],i,j;
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    printf("\n The Sum of two matrix is: \n\n");
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            printf("%d   ",sum[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
}



