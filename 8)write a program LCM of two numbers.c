#include <stdio.h>
int main()
{
    int x , y , max;
    scanf("%d",&x);
    scanf("%d",&y);
    max = (x > y) ? x : y;

    while (1) 
    {
        if (max % x == 0 && max % y == 0) 
        {
            printf("The LCM of %d and %d is %d.", x, y,max);
            break;
        }

        ++max;
    }

    return 0;
}
