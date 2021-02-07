#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float cel , fahre ;
    printf("Enter temperature in celcius : ");
    scanf("%f", &cel);

    fahre=(cel*9/5)+32;

    printf("%.3f celcius = %.3f fahrenheits", cel , fahre);

    return 0;
}
