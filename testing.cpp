#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*start,*newptr,*ptr,*save,*rear;

void hello()
{
    system("cls");
    cout<<"\nHello World\n";
    system("pause");
}

int main()
{
    int n = 69;
    hello();
    return 0;
}

