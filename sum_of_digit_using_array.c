#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n + 1];
    int sum = 0;

    scanf("%s", a);

    for(int i=0;i<n; i++)
    {
        sum += a[i] - '0';
    }

    printf("%d", sum);

    return 0;
}