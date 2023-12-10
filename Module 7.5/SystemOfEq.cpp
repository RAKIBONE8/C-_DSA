#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    cout<<"input a,b,c: ";
    cin>>a>>b>>c;
    cout<<"input d,e,f: ";
    cin>>d>>e>>f;
    double Dx,Dy,D;

    Dx = c*e - b*f;
    Dy = a*f - c*d;

    D = a*e - b*d;

    cout<<"For the system : "<<endl;
    cout<<a<<"x";
    if(b>0) cout<<"+";
    cout<<b<<"y = "<<c<<endl;
    cout<<d<<"x";
    if(e>0) cout<<"+";
    cout<<e<<"y = "<<f<<endl;

    cout<<"Solutions are: "<<endl;
    cout<<"The Value of x: "<<Dx/D<<endl;
    cout<<"The Value of y: "<<Dy/D<<endl;
    return 0;
}