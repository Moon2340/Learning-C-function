#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int number;
    number= fact(1)/1+ fact(2)/2+ fact(3)/3+ fact(4)/4+ fact(5)/5;
    cout<<"The sum is: "<< number;
    return 0;
}
int fact(int n)
{
    int m=n;
    while(--n)// the loop will continue till 0
    {
        m=m*n; //

        //cout<<n<<endl<<m<<endl;

    }
    return m?m:1; //if m=0 return 1 else return m;

}


