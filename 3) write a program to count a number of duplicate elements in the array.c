#include <stdio.h>
void main()
{
   int arr[100],n,ctr = 0,i,j; 
    printf(" the number of element in the array :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);  
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;  
                break;  
            }
        }
    }

    printf("Total number of duplicate elements found in the array: %d\n", ctr);
}


