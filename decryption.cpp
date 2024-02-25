#include <iostream>
using namespace std;
int gcd(int a, int b);
int modInverse(int a, int m);
int main()
{
    int p;
    int q;
    int n;
    int e;
    cout<<"Enroll first odd prime number p: ";
    cin>>p;
    cout<<"Enroll second odd prime number q: ";
    cin>>q;
    n=p*q;
    int mod=(p-1)*(q-1);
    cout<<"Enter exponent e: ";
    cin>>e;
    if (e<=1 || e>=mod || gcd(e, mod)!=1)
    {
        cout<<"Invalid value of e."<<endl;
        return 1;
    }
    int d=modInverse(e, mod);
    cout<<"Decryption key d: "<<d;
    return 0;
}
int gcd(int a, int b)
{
    if(b==0)return a;
    return gcd(b, a%b);
}
int modInverse(int a, int m) 
{
    int m0=m;
    int t;
    int q;
    int x0=0;
    int x1=1;
    if (m==1) return 0;
    while(a>1)
    {
        q=a/m;
        t=m;
        m=a%m, a=t;
        t=x0;
        x0=x1-q*x0;
        x1=t;
    }
    if(x1<0)x1+=m0;
    return x1;
}