#include <stdio.h> 
  void main() 
{ 
  int i,n,a[5],b[5] ;
  printf("enter elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
    for (i = 0; i < n; i++) 
    { 
        b[i] = a[i]; 
    } 
    printf("The first array is :"); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]); 
    } 
    printf("\nThe second array is :"); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d ", b[i]); 
    } 
}
