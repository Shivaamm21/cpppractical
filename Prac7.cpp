#include <iostream>
using namespace std;
int gcd(int m,int n)
{
    if(m == 0 || n == 0)
    return 0;
    if (m>n)
    return gcd(m-n,n);
    return gcd(m,n-m);
}
int main() 
{
    int m,n;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    cout<<"GCD of "<<m<<" and "<<n<<" is: "<<gcd(m,n);
    return 0;
}

