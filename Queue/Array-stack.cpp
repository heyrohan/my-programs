#include<iostream>
using namespace std;

int pushin(int);

int popout();

void display(int,int);

const int size = 5;
int Stack[size];
int push = -1;
int pop = -1;

int main()
{
    int item;
    char ch='y';
    system("cls");
    int temp = size;
    while(ch=='y'||ch=='Y')
    {
        cout<<"\n(max element can be store "<<size<<")\n";
        cout<<"\nSpace remaining "<<temp<<".\n";
        if (temp < 1)
        {
            cout<<"\nYou can not push anymore elements , size is excided!\n";
            break;
        }
        else
        {
            cout<<"\nEnter element you want to push in stack : ";
            cin>>item;
            int ret = pushin(item);
            temp--;

            if (ret == -1)
            {
                cout<<"\nSTACK OVERFLOW !!! ABORTING\n";
                break;
            }
            cout<<"\nUpdated Stack : \n";
            display(push,pop);

            cout<<"\nWant to push more elements in stack ? (y/n) : ";
            cin>>ch;
        }
    }
                                                                                
    ch = 'y';
    
    while (ch == 'y'||ch == 'Y')
    {   
        cout<<"\nDo you want to pop elements from stack (y/n) ? : ";
        cin>>ch;
        if (ch == 'y'||ch == 'Y')
        {        
            int ret = popout();
            cout<<"\nPop out element was : "<<ret;
            if (ret == -1)
            {
                cout<<"\nStack was Underflow!!!\n";
                break;
            }
            else
            {
                cout<<"\nUpdated Stack : \n";
                display(push,pop);
            }
        }
        else
        {
            break;
        }   
    }
    return 0;
}

int pushin(int value)
{
    if(pop >= size-1){return -1;}
    else if(push == -1 && pop == -1)
    {
        push++;
        pop++;
        Stack[pop] = value;
    }
    else if(pop >= 0)
    {
        pop++;
        Stack[pop] = value;
    }

    return 0;
}

int popout()
{
    if (pop == -1){return -1;}
    else
    {   
        int ret = Stack[pop];
        
        if (pop == push)
        {
            pop--;
            push--;
        }
        else
        {
            pop--;
        }
        
        return ret;
    }
}

void display(int push,int pop)
{
    if(push == -1){return;}
    for (int i = push; i < pop; i++)
    {
        cout<<Stack[i]<<"->\t";
    }
    cout<<Stack[pop];
}