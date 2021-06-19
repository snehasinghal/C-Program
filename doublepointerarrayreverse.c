#include<stdio.h>
int main()
{
  int n,i;
  printf("enter the size of array = "); 
  scanf("%d",&n);
  int a[n], *p1[n],**p2[n];
  printf("\nenter elements of array: ");
  for(i=0;i<n;i++) 
  scanf("%d",&a[i]);
  for(i=0;i<n;i++) 
  {
      p1[i] =&a[i];
      p2[i] =&p1[i];
  }
printf("\nREVERSE array printed using double pointer **p2: ");
for(i=n-1;i>=0;i--) 
printf(" %d",*(*p2[i]));
return 0;
}
