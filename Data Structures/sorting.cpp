#include<iostream>
using namespace std;

void GetSize(int &siz)
{
    cout<<"\nEnter size of array : ";
    cin>>siz;
    if(siz<0)
    {
        cout<<"\nSize can not be negative!, Try again...";
        GetSize(siz);
    }
    else
    {}
}

void GetLength(int &len,int &siz)
{
    cout<<"\nEnter Length(How many values you want to store) of array : ";
    cin>>len;
    if(len>siz)
    {
        cout<<"\nERORR : Length can not be greater than Size of array !, Try Again...";
        GetLength(len,siz);
    }
    else if (len<0)
    {
        cout<<"\nLength can not be negative!, Try again...";
        GetLength(len,siz);
    }
    else
    {}
}

void GetArray(int &len,int a[])
{
    for (int i = 0; i < len; i++)
    {
        cout<<"\nEnter element a["<<i<<"] : ";
        cin>>a[i];
    }
}

void PrintArray(int &len,int a[])
{
    cout<<"\nUpdated Array is : \n";
    for (int i = 0; i < len; i++)
    {
        cout<<" "<<a[i];
    }
}

int GetPos(int &len,int &siz)
{
    int pos;
    check:
    cout<<"\nYou can edit value in index position from 0 to "<<(siz-1);
    cout<<"\nEnter the index position : ";
    cin>>pos;
    if (pos>siz||pos<0)
    {
        cout<<"\nGiven position is invalid !, try again";
        goto check;
    }
    else
    {
        return pos;
    }
}

void SearchElement(int &len,int a[])
{
    int n,pos;
    bool check=0;
    cout<<"\nEnter element whose index position you want to find : ";
    cin>>n;
    for (int i = 0; i < len; i++)
    {
        if(n==a[i])
        {
            check=1;        
            pos=i;
            break;
        }
    }

    if (check==1)
    {
        cout<<"\nGiven element found at index position : "<<pos<<endl;
    }
    else
    {
        cout<<"\nNo such element found in given array !"<<endl;
    }
}

void InsertElement(int &siz,int &len,int a[])
{
    int n;
    int pos=GetPos(len,siz);
    cout<<"\nEnter the element : ";
    cin>>n;
    int space;
    space=siz-len;
    if (space==0)
    {
        cout<<"\nThere is no space left in array to insert any new value !\n";
    }
    else if(space<0)
    {
        cout<<"\nSomething Critically went wrong!!!\n";
    }
    else
    {
        len=len+1;
        for (int i = len; i >=pos; i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=n;
    }
    cout<<"\nsize = "<<siz;
    cout<<"\nUpdated Length : "<<len;
    cout<<"\nUpdated array : \n";
    for (int i = 0; i < len; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
}

void DeleteElement(int &siz,int &len,int a[])
{
    int pos=GetPos(len,siz);
    cout<<"\nValue that is present at index position "<<pos<<" is : "<<a[pos];
    char ch;
    cout<<"\nAre you sure you want to delete this element from array, (y/n) : ";
    cin>>ch;
    if (ch=='y'||ch=='Y')
    {
        for (int i = pos; i < len; i++)
        {
            a[i]=a[i+1];
        }
        len=len-1;
    }
    PrintArray(len,a);
}

void BubbleSort(int &len,int a[])
{
    int count[]={0,0};
    for (int i = 0; i < len-1; i++)
    {
        count[0]=count[0]+1;

        for (int j = 0; j < len-1-i; j++)
        {
            count[1]=count[1]+1;
            if (a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"\n\n i : "<<count[0];
    cout<<"\n j : "<<count[1];
    cout<<"\n\n";
    PrintArray(len,a);
}

//till insertion sort this is best
void SelectionSort(int &len,int a[])
{
    int count[]={0,0};
    for (int i = 0; i < len-1; i++)
    {
        count[0]=count[0]+1;
        int  min=i;
        for (int j = i+1; j < len-1; j++)
        {
            count[1]=count[1]+1;
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        if (min!=i)
        {
            int temp;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    cout<<"\n\n i : "<<count[0];
    cout<<"\n j : "<<count[1];
    cout<<"\n\n";
    PrintArray(len,a);
}

void QuickSort(int &len,int a[])
{

}

void InsertionSort(int &len,int a[])
{
    for (int i = 0; i < len; i++)
    {
        int first;
        first=a[i+1];
        int temp = (-1);
        for (int j = i; j >=0 ; j--)
        {
            if (a[i]>a[first])
            {
                int temp=i;
            }
        }

        if (temp!=(-1))
        {
            a[i+1]=a[temp];
            a[i]=first;   
        }
    }
    PrintArray(len,a);
}

void SortElements(int &len,int a[])
{
    int ch;
    check:
    cout<<"\nThere following ways to sort an array, please select one from given below :\n";
    cout<<"\n1. Bubble Sort";
    cout<<"\n2. Selection sort";
    cout<<"\n3. Quick Sort";
    cout<<"\n4. Insertion Sort";
    cout<<"\nEnter your choice (1,2,3,4) : ";
    cin>>ch;
    if (ch>0||ch<4)
    {
        switch (ch)
        {
            case 1:
            {
                BubbleSort(len,a);
            }
            break;

            case 2:
            {
                SelectionSort(len,a);
            }
            break;

            case 3:
            {
                QuickSort(len,a);
            }
            break;

            case 4:
            {
                InsertionSort(len,a);
            }
            break;
            
            default:
            cout<<"\nSomething went wrong...";
            break;
        }
    }
    else
    {
        cout<<"\nYou have selected invalid option!, try again...";
        goto check;
    }
}

int GetChoice()
{
    int ch;
    ch1:
    cout<<"\n-----------------WELCOME TO ARRAY ALGORITHMS-----------------\n";
    cout<<"\n1. Search Element";
    cout<<"\n2. Insert Elemnet";
    cout<<"\n3. Delete Element";
    cout<<"\n4. Sort Array";
    cout<<"\n5. EXIT from Menu";
    cout<<"\nEnter Your choice from (1,2,3,4,5) : ";
    cin>>ch;
    if(ch>5||ch<1)
    {
        cout<<"\nYou have selected invalid choice please try again...";
        goto ch1;
        //GetChoice();
    }
    else
    {
        return ch;
    }
}

void UserChoice(int &len,int &siz,int a[])
{
    int x = GetChoice();
    switch (x)
    {
        case 1:
        {       
            SearchElement(len,a);
        }
        break;
        
        case 2:
        {
            InsertElement(siz,len,a);
        }
        break;

        case 3:
        {
            DeleteElement(siz,len,a);
        }
        break;

        case 4:
        {
            SortElements(len,a);
        }
        break;

        case 5:
        break;

        default:
            cout<<"\nSomething went wrong !!!, Try Later...\n";
        break;
    }
}

int main()
{
    int siz,len;
    GetSize(siz);
    int a[siz];
    GetLength(len,siz);
    GetArray(len,a);
    ch2:
    UserChoice(len,siz,a);
    {
        int ch=1;
        cout<<"\n1. Want to perform another function with same array";
        cout<<"\n2. No i want to exit";
        cout<<"\nEnter your choice (1,2) : ";
        cin>>ch;
        if (ch==1)
        {
            goto ch2;
        }
        else
        {
            return 0 ;
        }
    }
}