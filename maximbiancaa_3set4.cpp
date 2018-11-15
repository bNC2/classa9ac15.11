#include<iostream>
using namespace std;
int n,i,s=0;
int main ()
{
    cout<<"Numar=";
    cin>>n;
    for (i=2;i<=n/2;i++)
        if (n%i==0)
        s=s+i;
    if(n>s)
        cout<<"Numarul" <<n<<"este supraaglomerat";
    else
        cout<<"Numarul"<<n<<"nu este supraaglomerat";
    return 0;
}
