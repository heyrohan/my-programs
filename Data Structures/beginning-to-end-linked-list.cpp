#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*start,*ptr,*newptr,*save;

node *create_node(int inf)
{
    ptr = new node;
    ptr->data = inf;
    ptr->next = NULL;
    return ptr;
}

void Insert(node *np)
{
    if(start == NULL)
    {
        start = np;
    }
    else
    {
        save = start;
        start = np;
        //ptr->next = save;
        np->next = save;
    }
}

void deletenode()
{
    if (start == NULL){cout<<"\nUNDERFLOW!!!";return;}
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
        cout<<np->data<<"->\t";
        np = np->next;
    }
    cout<<"!!!\n";
}

int main()
{
    int info;
    char ch = 'y';

    while (ch=='y'||ch=='Y')
    {
        cout<<"\nEnter data : ";
        cin>>info;
        newptr = create_node(info);
        if(ptr == NULL)
        {
            cout<<"\nCan not create new node !!!\n";
            break;
        }
        Insert(newptr);
        cout<<"\nwant to add more inormation ? (y/n) : ";
        cin>>ch;
    }

    cout<<"\nCreated linked list  is : \n";
    display(start);

    ch = 'y';

    while (ch=='y'||ch=='Y')
    {
        cout<<"\nWant to delete more node ? (y/n) : ";
        cin>>ch;
        if(ch=='y'||ch=='Y')
        {
            deletenode();
            if (start==NULL)
            {
                cout<<"\nUnderflow!!!\n";
                break;
            }
            
            cout<<"\nUpdated Linked-List\n";
            display(start);
        }
        else
        {
            break;
        }
    }
    return 0;
}