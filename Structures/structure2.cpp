#include<iostream>
using namespace std;

struct Employee
{
	char name[50];
	float salary;
	float hrs;
};

struct Employee Getdata(struct Employee a)
{
	int i;
	struct Employee em;
	cout<<"\nEnter details of employees : \n";
	for(i = 0; i < 3; i++)
	{
		cout<<"\nEnter name : ";
		cin.getline(em.name,50);
		cin.sync();
		cout<<"\nEnter salary : ";
		cin>>em.salary;
		cin.sync();
		cout<<"\nEnter hours of work per day : ";
		cin>>em.hrs;
		cin.sync();
	}
	return em;
}

void tst()
{
	
}

struct Employee Increment(struct Employee b)
{
	struct Employee em;
	
	if(em.hrs == 8)
	{
		em.salary = em.salary+50;
	}
	else if(em.hrs>8&&em.hrs<=10)
	{
		em.salary = em.salary+100;
	}
	else if(em.hrs>=12)
	{
		em.salary = em.salary+150;
	}
	return em;
	
}

struct Employee Printdata(struct Employee c)
{
	int i;
	struct Employee em;
	cout<<"\nEmployees details after incrementing salary : \n";
	for(i=0;i<3;i++)
	{
		cout<<"\nEmployee Name : "<<em.name;
		cout<<"\nEmployee Final Salary : "<<em.salary;
		cout<<"\nEmployee Hour of work per day : "<<em.hrs;
	}
	return em;
}

int main()
{
	struct Employee em;
	Getdata(em);
	Increment(em);
	Printdata(em);
	cout<<endl;
	return 0;
}