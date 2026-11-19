#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool flag = true;
    if(r==c)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j)
                {
                    // We are now at diagonal
                    printf("%d ",a[i][j]);
                }
                else
                {
                    if(a[i][j]!=0)
                    {
                        flag = false;
                    }
                }
            }
        }
        printf("\n");
        if(flag==true)
        {
            printf("This is a primary diagonal metrix");
        }
        else
        {
            printf("This is not a primary diagonal matrix");
        }
    }
    else
    {
        printf("This is not a primary diagonal matrix");
    }
    return 0;
}