#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n=8;
//(a)
    for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if (i>=j)
                //printf("[%d, %d]",i,j);
                printf("# ");
        printf("\n");
    }
    printf("\n");

//(b)
    for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if (i<=j)
                //printf("[%d, %d]",i,j);
                printf("# ");
        printf("\n");
    }
    printf("\n");
//(c)
    for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if (i<=j)
                //printf("[%d, %d]",i,j);
                printf("# ");
            else
                printf("  ");
        printf("\n");
    }
    printf("\n");
//(d)
    for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if (i+j<n)
                //printf("[%d, %d]",i,j);
                printf("  ");
            else
                printf("# ");
        printf("\n");
    }
    printf("\n");
//(e)
   for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if ((i==0)||(i==n)||(j==0)||(j==n)){
                //printf("[%d, %d]",i,j);
                printf("# ");
            }else
                printf("  ");
        printf("\n");
    }
    printf("\n");
//(f)
   for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if ((i==0)||(i==n)||(i==j)){
                //printf("[%d, %d]",i,j);
                printf("# ");
            }else
                printf("  ");
        printf("\n");
    }
    printf("\n");
//(g)
   for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if ((i==0)||(i==n)||(i+j==n)){
                //printf("[%d, %d]",i,j);
                printf("# ");
            }else
                printf("  ");
        printf("\n");
    }
    printf("\n");
//(h)
   for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if ((i==0)||(i==n)||(i+j==n)||(i==j)){
                //printf("[%d, %d]",i,j);
                printf("# ");
            }else
                printf("  ");
        printf("\n");
    }
    printf("\n");
    //(i)
   for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
            if ((i==0)||(i==n)||(i+j==n)||(i==j)||(j==0)||(j==n)){
                //printf("[%d, %d]",i,j);
                printf("# ");
            }else
                printf("  ");
        printf("\n");
    }
    printf("\n");
    return 0;
}
