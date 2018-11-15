#include<iostream>
using namespace std;

int main()
{
int n,d,s=1;
cout<<"Dati numarul n=";
    cin>>n;
    s+=n;
    for(d=2;d<=n/2;d++)
        if(n%d==0)
            s=s+d;
    if(2*n==s)
        cout<<n<<" este perfect";
    else
        cout<<n<<" nu este perfect";
return 0;
}
