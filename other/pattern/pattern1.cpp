#include<iostream>
#include<stdlib.h>
using namespace std;

void pattern1(int &row)
{
    int i,j;

    cout<<"\n\n-----------------Pattern 1-------------------\n\n";

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
}

void pattern2(int &row)
{
    int i,j;

    cout<<"\n\n-----------------Pattern 2---------------------\n\n";

    for(i=1;i<=row;i++)
    {
        for(j=row;j>=i;j--)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
}

int main()
{
    int row;

    cout<<"\nEnter no. row of pattern you want? : ";
    cin>>row;

    pattern1(row);
    pattern2(row);
    return 0;
}
