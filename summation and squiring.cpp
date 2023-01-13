#include<iostream>
#include <cmath>
using namespace std;
int power(int x);
int summation(int p);
int main()
{
    int num;
    cin>>num;
    cout<<"Sum of the series: "<<summation(num)<<endl;
    return 0;

}
int power(int x)
{
    return pow(x,x);
}
int summation(int p)
{
    double ans=0;
    while(p)
    ans= ans+power(p--);
    return ans;

}
