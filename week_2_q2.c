#include<stdio.h>

int main()
{
    int l , ar[10];
    printf("Enter the size of array within 10 ::");
    scanf("%d", &l);

    printf("Enter the elements of array ::");
    int j;
    for ( j = 0; j < l; j++)
    {
        scanf("%d", &ar[j]);
    }

    int sum_p=0,sum_e=0;
    int i;
    for ( i = 0; i < l; i++)
    {
        int pos;
        pos=i%2;
        if (pos==0)
        {
            sum_p+=ar[i];
        }
        int even;
        even=ar[i]%2;
        if (even==0)
        {
            sum_e+=ar[i];
        }
        
    }
    printf("\n");
    printf("sum of digits at EVEN POSITION numbers :: %d\n", sum_p);
    printf("sum of EVEN NUMBERS :: %d\n", sum_e);
    
    return 0;
}
