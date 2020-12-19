#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int n,n2,q;
cin>>n>>q;
float **a;
a = (float**)malloc(sizeof(float*) * n);


for (int i = 0; i < n; i++)
{
    cin>>n2;

    a[i] = (float*)malloc(sizeof(float) * n2);
    
    for (int j = 0; j < n2; j++)
    {
        cin>>a[i][j];
    }
}

for (int i = 1; i <= q; i++)
{
    int x,y;
    cin>>x>>y;
    cout<<a[x][y];
    cout<<endl;
}

return 0;
}