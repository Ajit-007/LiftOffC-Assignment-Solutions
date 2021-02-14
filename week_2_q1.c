#include <stdio.h>

int main()
{
    int n , m , sum=0 , re;

    printf("Enter the number you want :: \n");
    scanf("%d", &n);

    m=n;

    while (m != 0)
    {
        re=m%10;
        sum=sum+re;
        m=m/10;
    } 

    printf("Sum of digits of number %d = %d", n, sum);

    return 0;
}
