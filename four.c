#include <stdio.h>

int main(int argc, char const *argv[])
{
    int phy , chem , maths , bio , comp ;
    float per ;

    printf("Enter the marks of physics ::\n");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry ::\n");
    scanf("%d", &chem);
    printf("Enter the marks of mathematics ::\n");
    scanf("%d", &maths);
    printf("Enter the marks of biology ::\n");
    scanf("%d", &bio);
    printf("Enter the marks of computer ::\n");
    scanf("%d", &comp);

    per=(phy+chem+bio+maths+comp)/5.0;

    printf("percentage=%.2f\n", per);

    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if (per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    
    
    

    return 0;
}
