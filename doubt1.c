#include <stdio.h>
int main()
{
    int age;
    char gen;
    float per;
    printf("Enter your age : ");
    scanf("%i",&age);
    printf("Enter your gender (m/f) : ");
    scanf("%c",&gen);
    printf("Enter your percentage : ");
    scanf("%f",&per);
    
    if (gen=='f'&&age>=25&&age<=35&&per>=75)
        printf("You are selectd");
    else
        printf("You are not selected");
    return 0;
}
