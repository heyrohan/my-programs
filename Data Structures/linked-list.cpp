#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*start,*rear,*newptr,*ptr,*save;

struct node n;

node *create_node(int);

void insert(node *);

void delnode();

void display(node *);

int main()
{
    start = NULL;
    int inf;
    char ch = 'y';
    while (ch == 'y'|| ch == 'Y')
    {
        system("cls");
        cout<<"\nEnter information you want to store in linked-list : ";
        cin>>inf;
        newptr = create_node(inf);
        if(newptr == NULL)
        {
            cout<<"\nCan not create New node!!!, No space available in heap...";
        }
        insert(newptr);
        cout<<"\nWant to store more information ? (y/n) : ";
        cin>>ch;
    }
    system("cls");
    do
    {
        cout<<"\nUpdated list : \n";
        display(start);
    system("pause");
        cout<<"\nWant to delete first node ? (y/n) : ";
        cin>>ch;
        if(ch == 'y'||ch == 'Y')
        { delnode(); }
    } while (ch == 'y'||ch == 'Y');

    return 0;
}

node *create_node(int info)
{
    ptr = new node;
    ptr -> data = info;
    ptr -> next = NULL;
    return ptr;
}

void insert(node *np)
{
    if(start == NULL){ start = rear = np;}
    else
    {
        rear->next = np;
        rear = np;
    }
}

void delnode()
{
    if (start == NULL){ cout<<"\nUNDERFLOW!!!\n"; return;}
    else
    {
        ptr = start;
        start = start->next;
        delete ptr;
    }
}

void display(node *np)
{
    while (np!=NULL)
    {
        cout<<np->data<<"-->";
        np = np->next;
    }
    cout<<"!!!\n";    
}