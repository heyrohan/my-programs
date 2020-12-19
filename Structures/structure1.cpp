#include<iostream>
using namespace std;

struct student
{
	int roll,age;
	char name[50];
};

void GetData();
void PrintData();

int main()
{
	GetData();
	PrintData();
	return 0;
}

void GetData()
{
	student st;
	int i;
	cout<<"\nEnter student details : \n";
	for(i = 0; i < 4; i++)
	{
		cout<<"\nStudent : "<<i+1;
		cout<<"\nEnter student name : ";
		cin.getline(st.name,50);
		cin.sync();
		cout<<"\nEnter student roll number : ";
		cin>>st.roll;
		cin.sync();
		cout<<"\nEnter student age : ";
		cin>>st.age;
		cin.sync();
	}
	cout<<"\nDetails Entered Successfully.";
}

void PrintData()
{
	system("cls");
	student st;
	int i;
	cout<<"\nThis are the student deatils  : \n";
	for(i = 0; i < 4; i++)
	{
		cout<<"\nStudent : "<<i+1;
		cout<<"\nStudent name  : "<<st.name;
		cout<<"\nStudent roll no. : "<<st.roll;
		cout<<"\nStudent age : "<<st.age;
		cout<<endl;
	}
}