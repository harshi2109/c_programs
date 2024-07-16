#include <stdio.h>
int main()
{
int i, n, a[100];
printf("enter the number of elements to  in the array :");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
printf("element - %d : ", i);
scanf("%d", &a[i]);
 }
 printf("reverse elements in an array are\n");
 for(i=n-1;i>=0;i--)
{
printf("%d",a[i]);
}
}
