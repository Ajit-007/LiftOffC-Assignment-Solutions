#include <stdio.h>

int main()
{
    int m[50] , i , n , lar , sma;
    printf("Enter the number of elements ::\n");
    scanf("%d", &n);
    printf("Input the array elements ::\n");

    for ( i = 0; i < n; ++i)
    {
        scanf("%d", &m[i]);
    }

    lar=sma=m[0];

    for ( i = 1; i < n; ++i)
    {
        if (m[i]>lar)
        {
            lar=m[i];
        }
        if (m[i]<sma)
        {
            sma=m[i];
        }
        
        
    }

    printf("The smallest element in the array is %d .\n", sma);
    printf("The largest element in the array is %d .\n", lar);
    
    

    return 0;
}
