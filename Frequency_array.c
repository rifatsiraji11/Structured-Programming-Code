#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int frq[10] = {0};
    for(int i=0;i<n;i++)
    {
        int val = arr[i];
        frq[val]++;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d = %d\n", i, frq[i]);
    }
    return 0;
}