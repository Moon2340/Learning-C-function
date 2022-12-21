#include<stdio.h>
void swap(int *a, int *b);
int main()
{
int x,y;
printf("Enter Two Numbers: ");
scanf("%d%d", &x,&y);
printf("\nbefore swapping: x=%d and y=%d ",x,y);
swap(&x,&y);// Passing the address of x and y to the function
printf("\nafter swapping: x=%d and y=%d ",x,y);
return 0;
}
void swap (int *a, int *b)//a store the address of x and *a store the value of x
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
