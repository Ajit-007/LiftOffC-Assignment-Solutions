#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a , b ;
    int sum , diff , mul , div , mod ;
    printf("Enter any two no.s::\n");
    scanf("%d%d" , &a , &b , "\n");

    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("\n");
    printf("sum  %d + %d = %d\n", a , b , sum);
    printf("difference  %d - %d = %d\n", a , b , diff);
    printf("product  %d * %d = %d\n", a , b , mul);
    printf("division  %d / %d = %d\n", a , b , div);
    printf("modulus  %d %% %d = %d\n", a , b , mod);


    return 0;
}
