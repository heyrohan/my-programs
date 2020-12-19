#include<iostream>
#include<process.h>
using namespace std;

int insertQ(int);
int deleteQ();
void display(int,int);

const int size=100;
int Queue[size];

int front = -1, rear = -1;

int main()
{
	int item,res,ch1=0; char ch='y';
	check:
	system("cls");
	cout<<"\n-----------------Array Queues-------------------\n";
	cout<<"\n1. Insert";
	cout<<"\n2. Delete";
	cout<<"\n3. Exit";
	cout<<"\nEnter your choice (1/2/3) : ";
	cin>>ch1;
	if (ch1==3){exit(0);}
	switch (ch1)
	{
	case 1:
	{
		while(ch=='y'||ch=='Y')
		{
			cout<<"\nEnter item you want to insert (max no. of item can be only "<<size<<" ) : "; cin>>item;
			res = insertQ(item);
			if(res==-1){ cout<<"\nOverflow!!! aborting\n"; exit(1);}
			cout<<"\nUpdated Queue is : \n";
			display(front,rear);
			cout<<"\nWant to insert more value in it ? (y/n) : "; cin>>ch;
			if (ch == 'n'||ch == 'N')
			{
				cout<<"\nWant to perform other action in this queue ? (y/n) : ";
				cin>>ch;
				if (ch == 'y'||ch == 'Y')
				{
					goto check;
				}
				else
				{
					break;
				}
			}
		}
	}	
	break;
	
	case 2:
	{
		ch='y';
		while(ch=='y'||ch=='Y')
		{
			cout<<"\nStarting Deleting from Array queue : \n";
			int res = deleteQ();
			cout<<"\nDeleted element was : "<<res;
			if (res == -1)
			{ cout<<"\nUnderflow!!! Aborting\n"; exit(1); }
			cout<<"\nUpdated Queue is : \n";			
			display (front,rear);
			cout<<"\nWant to delete more value in it ? (y/n) : ";
			cin>>ch;
		}
	}	
	break;

	case 3:
	break;

	default:
		cout<<"\nYou have entered invalid choice try again...";
		goto check;
	break;
	}

	//return 0;
}

int insertQ(int ele)
{
	if(rear == size -1){ return -1;}
	else if(rear == -1)
	{
		front = 0;
		rear = 0;
		Queue[rear] = ele;
	}
	else if(rear >= 0)
	{
		rear++;
		Queue[rear] = ele;
	}
	return 0;
}

int deleteQ()
{
	int value;
	if(front <= -1){return -1;}
	else
	{
		value = Queue[front];
		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front++;
		}
		return value;
	}
}

void display(int front, int rear)
{
	if (front == -1)
	{ return ;}
	
	for (int i = front; i < rear; i++)
	{	cout<<Queue[i]<<"<-\t"; }
	cout<<Queue[rear]<<endl;
}