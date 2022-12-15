#include<stdio.h>
int square(int a, int b);
int main()
{
    int x,y,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    result= square(x,y);
    printf("The sum is: %d", result);
    return 0;
}
int square(int a, int b)
{
    int Result= (a*a)+(b*b);
    return Result;
}
