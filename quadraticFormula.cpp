#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float x,x1,x2;
    cout<<"\nSolving Quadratic Equation Using Quadratic Formula by Dronacharya : ";
    cout<<"\nEquation Example : a(x)square + bx + c = 0";
    cout<<"\n Formula is : x = (-b +or- sqrt(D))/2a\nWhere D is b*b - 4*a*c";
    cout<<"\nEnter the value of a,b,c from your equation: ";
    cout<<"\na : ";
    cin>>a;
    cout<<"\nb : ";
    cin>>b;
    cout<<"\nc : ";
    cin>>c;
    d = (b*b - 4*a*c);
    if(d>0)
    {
    x1 = ((-b + sqrt(d))/2*a);
    x2 = ((-b - sqrt(d))/2*a);
    cout<<"\nX1 : "<<x1;
    cout<<"\nX2 : "<<x2;
    }
    else if(d==0)
    {
        x = ((-1)*b/2*a);
        cout<<"x : "<<x;
    }
    else
    {
        cout<<"\n you are going to play with complex roots ";
	x1= sqrt(-d)/2*a;
		cout<<"\n x1 : "<<-b/2*a<<"+"<<x1<<"i";
                cout<<"\n x2 : "<<-b/2*a<<"-"<<x1<<"i";
    }
    return 0;
}
