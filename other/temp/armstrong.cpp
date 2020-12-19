#include<iostream>
using namespace std;

int CheckDigit(int no)
{
	int n=0;
	while(no>0)
	{
		no=no/10;
		n = n+1;
	}
	return n;
}

int ArmstrongLogic(int &n)
{
    int rev,temp,sum=0;
	int digit = CheckDigit(n);
    temp=n;
    do
    {
        rev = temp%10;
		int i,power=1;
		for(i=0;i < digit;i++)
		{
			power = rev*power;
		}
        sum = sum + power;
        temp = temp/10;
    }
    while(temp!=0);
	return sum;
}

int main()
{
	bool err=0;
	check1:
	system("cls");
    int n,sum=0,range;
	long int allsum=0;
	char ch;

	check2:
	if(ch=='Y'||ch=='y')
	{
		system("cls");
	}
	
	if(err != 0)
	{
		cout<<"\nGiven range is less than 1 and it must be greater than 0.\n";
	}
	cout<<"\nEnter a limit number till where you find to find armstrong no. , it must be above than 0 : ";
	cin>>range;
	if(range>0)
	{
		cout<<"\nThese are the armstrong numbers till your given range : "<<endl;
		for(n=1;n<=range;n++)
		{
			sum = ArmstrongLogic(n);	
			
			if(sum==n)
			{
				cout<<n<<" , ";
			}
			allsum = sum+allsum;
		}
		cout<<"\nand the sum of all these armstrong numbers is : "<<allsum;
	}
	else
	{
		err = 1;
		goto check1;
	}
	
	cout<<"\n\nWant to run again the program ? : (y/n)\n";
	cin>>ch;
	if(ch=='Y'||ch=='y')
	{
		goto check2;
	}
	else
	{
		cout<<endl;
		return 0;
	}
}
