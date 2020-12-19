#include<stdio.h>
#include<stdlib.h>

void pattern1(int n)
{
    int i,j;

    printf("\n\n-----------------Pattern 1-------------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
void pattern2(int n)
{
    int i,j;

    printf("\n\n-----------------Pattern 2-------------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern3(int n)
{
    int i,j;

    printf("\n\n-----------------Pattern 3---------------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern4(int n)
{
    int i,j;

    printf("\n\n-----------------Pattern 4----------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf("  ");
        }

        for(j=1;j<=n-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern5(int n)
{
    int i,j;

    printf("\n\n------------------Pattern 5---------------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern6(int n)
{
    int i,j;

    printf("\n\n-----------------Pattern 6--------------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=((i-1)*2);++j)
        {
            printf("  ");
        }
        for(j=1;j<=n-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern7(int n)
{
    int i,j;

    printf("\n\n-------------------Pattern 7------------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}

void pattern8(int n)
{
    int i,j;

    printf("\n\n----------------Pattern 8---------------\n\n");

    for(i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j=1;j<=(2*n-i);j++)
            {
                printf("* ");
            }
         }
         printf("\n");
    }
}

void pattern9(int n)
{
    int i,j;

    printf("\n\n----------------Pattern 9------------------\n\n");

    for(i=1;i<=(2*n-1);i++)
    {
        if(i<=n)
        {
            for(j=1;j<=(n-i);j++)
            {
                printf("  ");
            }
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j=1;j<=(i-n);j++)
            {
                printf("  ");
            }
            for (j=1;j<=(2*n-1-i+1);j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}

void pattern10(int n)
{
    int i,j;

    printf("\n\n----------------Pattern 10-----------------\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n+1);j++)
        {
            if(j<=(2*n+1)/2)
            {
                for(j=1;j<=(2*n+1-(n+i));j++)
                {
                    printf("* ");
                }
                for(j=1;j<=((2*n+i)-(2*n+1));j++)
                {
                    printf("  ");
                }
            }
            else if(j==((2*n+1)/2)+1)
            {
                printf("  ");
            }
            else if(j>(2*n+1/2))
            {
                for(j=1;j<=((2*n+i)-(2*n+1));j++)
                {
                    printf("  ");
                }
                for(j=1;j<=((2*n+1-(n+i)));j++)
                {
                    printf("* ");
                }
            }
        } printf("\n");
    }
}

int main()
{
    int row;

    system("cls");

    printf("\nEnter no. row of pattern you want? : ");
    scanf("%d",&row);

    pattern1(row);
    pattern2(row);
    pattern3(row);
    pattern4(row);
    pattern5(row);
    pattern6(row);
    pattern7(row);
    pattern8(row);
    pattern9(row);
    pattern10(row);
    
    return 0;
}
