#include<stdio.h>
int evenodd(int n1);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    evenodd(number);
    if (evenodd(number)==1)
        printf("The entered number is even");
    else
        printf("The entered number is odd");
    return 0;
}
int evenodd(int n1)
{
    if (n1%2==0)
        return 1;
        else
        return 0;
}
