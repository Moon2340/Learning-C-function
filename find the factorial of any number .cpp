#include<iostream>
using namespace std;
int fact(int number);
int main()
{
    int num;
    cin>> num;
    fact(num);
    cout<<"The sum is: "
    //cout<<"The Factorial is: "<<fact(num)<<endl;
    return 0;
}
int fact(int number)
{
    int i, result;
    for(i=1; i<=number; number++)
      return (number*fact(number-1));


}
