#include <stdio.h>

int main(int argc, char const *argv[])
{
    float r , d=0 , c=0 , a=0 ;

    printf("Enter the radius of circle::\n");
    scanf("%f", &r);

    d=2*r;
    c=3.14*d;
    a=3.14*r*r;

    printf("\n");
    printf("diameter  :: = %f units \n", d);
    printf("circumference  :: = %f units \n", c);
    printf("area  :: = %f sq. units", a);
    
    return 0;
}
