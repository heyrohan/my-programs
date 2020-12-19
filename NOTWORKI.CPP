#include<iostream>
using namespace std;

int getLength()
{
int len;
cout<<"\nEnter length of array from 0 to 10 : ";
cin>>len;
return len;
}

void getArray(int &len,int a[])
{
cout<<"\nEnter elements of array : \n";
for(int i=0;i<len;i++)
{
cout<<"\nEnter element a["<<i<<"] : ";
cin>>a[i];
}
}

void printArray(int &len,int a[])
{
cout<<"\nUpdated Aray : \n";
for(int i=0;i<len;i++)
{
cout<<" "<<a[i];
}
}

/*void selectionSort(int &len,int a[])
{

} */

int main()
{
int a[10],x;
x = getLength();
while(x>10 && x<0)
{
x = getLength();
}
getArray(x,a);
//selectionSort(len,a);
printArray(x,a);
return 0;
}