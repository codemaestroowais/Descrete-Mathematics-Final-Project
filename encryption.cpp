#include <iostream>
#include <cmath>
using namespace std;
int GCD(int a, int b);
int mod(int x, unsigned int y, int mod);
bool coprime(int a, int b);
int RSA(int message, int n, int e);
int main()
{
    int p;
    int q;
    int n;
    int add;
    int e;
    int message;
    cout<<"Enroll the first prime number: ";
    cin>>p;
    cout<<"Enroll the second prime number: ";
    cin>>q;
    n=p*q;
    add=(p-1)*(q-1);
    cout<<"Enroll an exponent e (relatively prime to (p-1)(q-1)): ";
    cin>>e;
    if(!coprime(e, add))
    {
        cout<<"e is not coprime with (p-1)(q-1). Please enter a different e."<<endl;
        return 1;
    }
    cout<<"Enroll the message to encrypt: ";
    cin>>message;
    int encrypt=RSA(message, n, e);
    cout<<"Encrypted message is: "<<encrypt<<endl;
}
int GCD(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b, a%b);
}
int mod(int x, unsigned int y, int mod)
{
    int index=1;
    x=x%mod;
    while(y>0)
    {
        if(y&1)
        {
            index=(index*x)%mod;
        }
        y=y>>1;
        x=(x*x)%mod;
    }
    return index;
}
bool coprime(int a, int b)
{
    return GCD(a, b)==1;
}
int RSA(int message, int n, int e)
{
    return mod(message, e, n);
}