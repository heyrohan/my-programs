#include<iostream>
#include<stdlib.h>
using namespace std;

void perfectNoLogic(int &n, int &sum)
{
    for(int i = 1; i < n; i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
    }
	
	cout<<"\nSum : "<<sum<<endl;
}

int main()
{
    int n,sum=0;

    system("cls");
    cout<<"\nEnter a no. to check whether it is Perfect no. or not : ";
    cin>>n;

    perfectNoLogic(n,sum);

    if(sum==n)
    {
        cout<<"\nGiven no. "<<n<<" is a perfect no.";
    }
    else if(sum!=n)
    {
        cout<<"\nGiven no. "<<n<<" is NOT an perfect no.";
    }

    return 0;
}
