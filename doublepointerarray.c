#include<stdio.h>
int main()
{
    int n;
    printf("input size of array: ");
    scanf("%d",&n);
    int a[n],*p[n],**p2[n];
    printf("\n enter the elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        p[i]=&a[i];
        p2[i]=&p[i];
    }
    printf("\n your array elements using double pointer are: ");
    for(int i=0;i<n;i++)
    printf(" %d",**p2[i]);
    return 0;
}