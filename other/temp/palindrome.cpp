#include<iostream>
#include<stdlib.h>
using namespace std;

void palindromeLogic(int &n, int &sum)
{
    int temp,rev;

    temp=n;

    do
    {
        rev=temp%10;
        sum=(sum*10)+rev;
        temp=temp/10;
    }
    while(temp!=0);
     
	
	cout<<"\nReverse : "<<sum<<endl;
}


int main()
{
    int n,sum=0;
    system("cls");

    cout<<"\nEnter a number to check whether it is palindorme or not : ";
    cin>>n;

    palindromeLogic(n,sum);

    if(sum==n)
    {

        printf("\nGiven No. is Palindrome number.");
    }
    else if(sum!=n)
    {
        printf("\nGiven no. is NOT a Palindrome number.");
    }

    return 0;
}
