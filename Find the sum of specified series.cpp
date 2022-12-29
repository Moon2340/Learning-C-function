#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int number;
    cout<<"The sum is: "<< fact(number);
    return 0;
}
int fact(int n)
{
    int m=n;
    while(--n)//0 porjonto jabe
    {
        m=m*n;

        //cout<<n<<endl<<m<<endl;

    }
    return m?m:1;

}

