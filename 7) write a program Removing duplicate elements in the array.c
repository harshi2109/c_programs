#include <stdio.h>
void main()
{
    int arr[100],n,i,j,k;          
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j;k<n-1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}
