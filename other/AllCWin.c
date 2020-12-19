#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

//-------------------------------FOR ALL TYPES OF FUNCTION-----------------------------------

//RETURN FUNCTION WITH NO ARGUMENTS
int table1()
{
int i;
float n;

scanf("%f",&n);

for(i=1;i<=10;i++)
{
printf("%f X %d = %f",n,i,(n*i));
printf("\n");
}

return 0;
}

//RETURN FUNCTION WITH ARGUMENTS
float table2(int i, float n)
{
scanf("%f",&n);

for(i=1;i<=10;i++)
{
printf("%f X %d = %f",n,i,(n*i));
printf("\n");
}

return 0;
}

//NO RETURN FUNCTION WITH NO ARGUMENTS
void table3()
{
int i;
float n;

scanf("%f",&n);

for(i=1;i<=10;i++)
{
printf("%f X %d = %f",n,i,(n*i));
printf("\n");
}

}

//NO RETURN FUNCTION WITH ARGUMENTS
void table4(int i, float n)
{
scanf("%f",&n);

for(i=1;i<=10;i++)
{
printf("%f X %d = %f",n,i,(n*i));
printf("\n");
}

}
//--------------------END OF FOR ALL TYPES OF FUNCIONS------------------------

int main()
{

int ch1;
int i,j;

do
{
system("cls");
int ch;

printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~PROGRAMS~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
printf("\n1. Hello World");
printf("\n2. Arthmatics Operations");
printf("\n3. If and Else");
printf("\n4. All Types Of Loops");
printf("\n5. All Types Of Function");
printf("\n6. 2D Array");
printf("\n7. Brain Teasing Program.");
printf("\n8. Exit");
printf("\nSelect Your Choice (1,2,3,4,5,6,7,8) : ");
scanf("%d",&ch);

switch(ch)
{

case 1:
{
system("cls");
printf("\n\n-------------------------HELLO WORLD------------------------\n\n");
printf("\nHello World\n\n");
}
break;

case 2:
{
system("cls");
float a,b;

printf("\n\n-----------------------ARTHMATICS OPERATIONS------------------------\n\n");

int ch;
printf("\n");
printf("\n1. Addition");
printf("\n2. Subtraction");
printf("\n3. Multiplication");
printf("\n4. Divide");
printf("\n5. Modulus(Remainder)");
printf("\n6. Exit");
printf("\nEnter Your Choice (1,2,3,4,5,6): ");
scanf("%d",&ch);

switch(ch)
{
case 1:
system("cls");
printf("ADDITION :\n");
printf("\nEnter The Value Of a : ");
scanf("%f",&a);
printf("\nEnter The Value Of b : ");
scanf("%f",&b);
printf("\nSum of Given No. %f and %f is : %f",a,b,a+b);
break;

case 2:
system("cls");
printf("SUBTRACTION :\n");
printf("\nEnter The Value Of a : ");
scanf("%f",&a);
printf("\nEnter The Value Of b : ");
scanf("%f",&b);
printf("\nSub of Given No. %f and %f is : %f",a,b,a-b);
break;

case 3:
system("cls");
printf("MULTIPLICATION :\n");
printf("\nEnter The Value Of a : ");
scanf("%f",&a);
printf("\nEnter The Value Of b : ");
scanf("%f",&b);
printf("\nMultiply of Given No. %f and %f is : %f",a,b,a*b);
break;

case 4:
system("cls");
printf("DIVIDITION :\n");
printf("\nEnter The Value Of a : ");
scanf("%f",&a);
printf("\nEnter The Value Of b : ");
scanf("%f",&b);
printf("\nDivide of Given No. %f and %f is : %f",a,b,a/b);
break;

case 5:
system("cls");
int x,y,z;
printf("MODULUS(REMAINDER) :\n");
printf("\nEnter The Value Of a : ");
scanf("%d",&x);
printf("\nEnter The Value Of b : ");
scanf("%d",&y);
z=x%y;
printf("\nRemainder of Given No. %d and %d is : %d",x,y,(x%y));
break;

case 6:
system("cls");
printf("Press Enter Key Again To Exit.");
break;

default :
printf("\n\nYou Have Selected Invalid Choice!");
}

}
break;

case 3:
{
    system("cls");
    int faltu;
    char v;
    printf("\n\n------------------------IF AND ELSE-----------------------\n\n");
    printf("\n Knowing the type of Keyword that Entered By User Using If and Else :\n\n");
    printf("\nEnter any One Keyword : ");
    scanf("%d",&faltu);
    scanf("%c",&v);

    if(islower(v))
    {
        printf("\nGiven Keyword is an Lowercase Alphabet.");
    }
    else if(isupper(v))
    {
        printf("\nGiven Keyword is an Uppercase Alphabet.");
    }
    else if(isdigit(v))
    {
        printf("\nGiven Keyword is an Number.");
    }
    else
    {
        printf("\nGiven Keyword is an Special Character.");
    }
    printf("\n");
}
break;

case 4:
{
system("cls");

printf("\n\n------------------------ALL Types Of  LOOPS------------------------\n\n");

int ch;
float n;

printf("\n1. For Loop.");
printf("\n2. While Loop.");
printf("\n3. Do While Loop.");
printf("\n4. Exit");
printf("\nEnter Your Choice (1,2,3,4) : ");
scanf("%d",&ch);

switch(ch)
{

case 1:
{
system("cls");
int i=1;
printf("\nFOR LOOP : \n");
printf("\nEnter a no. to do its table : ");
scanf("%f",&n);
printf("\nTable of %f is : ",n);
printf("\n");
 for(i=1;i<=10;i++)
 {
  printf("%f X %d = %f",n,i,(n*i));
  printf("\n");
 }

}
break;

case 2:
{
int i=1;
system("cls");
printf("\nWHILE LOOP : \n");
printf("\nEnter a no. to do its table : ");
scanf("%f",&n);
printf("\nTable of %f is : ",n);
printf("\n");

while(i<=10)
{
printf("%f X %d = %f",n,i,(n*i));
printf("\n");
i++;
}

}
break;

case 3:
{
system("cls");
int i=1;;
printf("\nDO WHILE LOOP : \n");
printf("\nEnter a no. to do its table : ");
scanf("%f",&n);
printf("\nTable of %f is : \n",n);
printf("\n");
 do
 {
  printf("%f X %d = %f",n,i,(n*i));
  printf("\n");
  i++;
 }
 while(i<=10);
}
break;

case 4:
break;

default :
{
printf("\nYou Have Selected an Invalid Choice!");
}
}

}
break;

case 5:
{
system("cls");
int ch;
printf("\n\n---------------------------All Types Of Functions---------------------------------");
printf("\n1. Return Function With No Arguments");
printf("\n2. Return Function With Arguments");
printf("\n3. No Return Function With No Arguments");
printf("\n4. No Return Function With Arguments");
printf("\n5. Exit");
printf("\n Select Option (1,2,3,4,5) : ");
scanf("%d",&ch);

switch(ch)
{

case 1:
{
system("cls");
printf("\nReturn Function With No Arguments\n");
printf("\nEnter a no. to find its table : ");
table1();
}
break;

case 2:
{
int a;
float b;
system("cls");
printf("\nReturn Function With Arguments\n");
printf("\nEnter a no. to find its table : ");
table2(a,b);
}
break;

case 3:
{
system("cls");
printf("\nNo Return Function With No Arguments\n");
printf("\nEnter a no. to find its table : ");
table3();
}
break;

case 4:
{
system("cls");
int a;
float b;
printf("\nNo Return Function With Arguments\n");
printf("\nEnter a no. to find its table : ");
table4(a,b);
}
break;

case 5:
break;

default:
{
printf("\nYou Have Selected an Invalid Option.");
}

}

}
break;

case 6:
{
system("cls");

int ch;

printf("\n\n--------------------------2D Array By MATRIX OPERATIONS----------------------\n\n");
printf("\n1. View of Matrix");
printf("\n2. Transpose Of Matrix");
printf("\n3. Addition of Matrix");
printf("\n4. Subtraction of Matrix");
printf("\n5. Multiplication of Matrix");
printf("\n6. Diagonal of matrix");
printf("\n7. Exit");
printf("\nSelect Options (1,2,3,4,5,6) : ");
scanf("%d",&ch);

switch(ch)
{

case 1:
{
system("cls");
int r1,r2,c1,c2;
int a[100][100],b[100][100];
printf("\nView of Matrix : \n");
printf("\nEntering No. of rows & coloumn of Matrix 1 and 2 :\n");
printf("\nEnter no. of rows of matrix 1 : ");
scanf("%d",&r1);
printf("Enter no. of Coloumn of matrix 1 : ");
scanf("%d",&c1);

printf("Enter no. of rows of matrix 2 : ");
scanf("%d",&r2);
printf("Enter no. of Coloumn of matrix 2 : ");
scanf("%d",&c2);

printf("\nEntering Elements of matrix 1 and 2 :\n");
printf("\nElements for matrix 1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&a[i][j]);
}
}

printf("\nElements for matrix 2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&b[i][j]);
}
}

printf("\nBy Given Elements Your Matrix 1 and 2 is : \n\n");
system("cls");
printf("\n MATRIX 1 : \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

printf("\n MATRIX 2 : \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}


}
break;

case 2:
{

system("cls");
int r1,r2,c1,c2;
int a[100][100],b[100][100];
printf("\nTranspose of matrix : \n");
printf("\nEntering No. of rows & coloumn of Matrix 1 and 2 :\n");
printf("\nEnter no. of rows of matrix 1 : ");
scanf("%d",&r1);
printf("Enter no. of Coloumn of matrix 1 : ");
scanf("%d",&c1);

printf("Enter no. of rows of matrix 2 : ");
scanf("%d",&r2);
printf("Enter no. of Coloumn of matrix 2 : ");
scanf("%d",&c2);

printf("\nEntering Elements of matrix 1 and 2 :\n");
printf("\nElements for matrix 1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&a[i][j]);
}
}

printf("\nElements for matrix 2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&b[i][j]);
}
}


system("cls");
printf("\nBy Given Elements Your Matrix 1 and 2 is : \n\n");
printf("\nTranspose of MATRIX 1 : \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}

printf("\nTranspose of MATRIX 2 : \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",b[j][i]);
}
printf("\n");
}


}
break;

case 3:
{
system("cls");
int r1,r2,c1,c2;
int a[100][100],b[100][100];

printf("\nAddition of matrix : \n");
printf("\nEntering No. of rows & coloumn of Matrix 1 and 2 :\n");
printf("\nEnter no. of rows of matrix 1 : ");
scanf("%d",&r1);
printf("Enter no. of Coloumn of matrix 1 : ");
scanf("%d",&c1);

printf("Enter no. of rows of matrix 2 : ");
scanf("%d",&r2);
printf("Enter no. of Coloumn of matrix 2 : ");
scanf("%d",&c2);

printf("\nEntering Elements of matrix 1 and 2 :\n");
printf("\nElements for matrix 1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&a[i][j]);
}
}

printf("\nElements for matrix 2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&b[i][j]);
}
}

printf("\nBy Given Elements of Your, The Addition of matrix 1 and 2 Becomes :\n\n");
for(i=0;i<r1;i++)
{
for(j=0;i<c1;j++)
{
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",(a[i][j]+b[i][j]));
}
printf("\n");
}
}
}

}
break;

case 4:
{
system("cls");
int r1,r2,c1,c2;
int a[100][100],b[100][100];

printf("\nSubtraction of matrix : \n");
printf("\nEntering No. of rows & coloumn of Matrix 1 and 2 :\n");
printf("\nEnter no. of rows of matrix 1 : ");
scanf("%d",&r1);
printf("Enter no. of Coloumn of matrix 1 : ");
scanf("%d",&c1);

printf("Enter no. of rows of matrix 2 : ");
scanf("%d",&r2);
printf("Enter no. of Coloumn of matrix 2 : ");
scanf("%d",&c2);

printf("\nEntering Elements of matrix 1 and 2 :\n");
printf("\nElements for matrix 1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&a[i][j]);
}
}

printf("\nElements for matrix 2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&b[i][j]);
}
}

printf("\nBy Given Elements of Your, The Subtraction of matrix 1 by 2 Becomes :\n\n");
for(i=0;i<r1;i++)
{
for(j=0;i<c1;j++)
{
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",(a[i][j]-b[i][j]));
}
printf("\n");
}
}
}

}

break;

case 5:
{
system("cls");
int r1,r2,c1,c2,x;
int a[100][100],b[100][100],c[100][100];

do
{
system("cls");
printf("\nMultiplication of matrix : \n");
printf("\nNOTE: TO MULTIPLY TWO MATRIX, THE NO. OF ROW OF MATRIX 1 and THE NO. OF COLOUMN OF MATRIX 2 MUST BE EQUAL !!!\n");
printf("\nEntering No. of rows & coloumn of Matrix 1 and 2 :\n");
printf("\nEnter no. of rows of matrix 1 : ");
scanf("%d",&r1);
printf("Enter no. of Coloumn of matrix 1 : ");
scanf("%d",&c1);

printf("Enter no. of rows of matrix 2 : ");
scanf("%d",&r2);
printf("Enter no. of Coloumn of matrix 2 : ");
scanf("%d",&c2);
}
while(r1!=c2||c1!=r2);

printf("\nEntering Elements of matrix 1 and 2 :\n");
printf("\nElements for matrix 1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&a[i][j]);
}
}

printf("\nElements for matrix 2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&b[i][j]);
}
}

//initializing matrix c
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
}
}

//now multiplying
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
for(x=0;x<c1;x++)
{
c[i][j]+=a[i][j]*b[i][j];
}
}
}

printf("\n By Given Elements of your, Multiple of matrix 1 and 2 Becomes :\n\n");

for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}



}
break;

case 6:
{
system("cls");
int r1,r2,c1,c2;
int a[100][100],b[100][100];

printf("\nDiagonal of matrix : \n");
printf("\nEntering No. of rows & coloumn of Matrix 1 and 2 :\n");
printf("\nEnter no. of rows of matrix 1 : ");
scanf("%d",&r1);
printf("Enter no. of Coloumn of matrix 1 : ");
scanf("%d",&c1);

printf("Enter no. of rows of matrix 2 : ");
scanf("%d",&r2);
printf("Enter no. of Coloumn of matrix 2 : ");
scanf("%d",&c2);

printf("\nEntering Elements of matrix 1 and 2 :\n");
printf("\nElements for matrix 1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&a[i][j]);
}
}

printf("\nElements for matrix 2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\nEnter Element of a[%d][%d] : ",(i+1),(j+1));
scanf("%d",&b[i][j]);
}
}

system("cls");
printf("\nBy Given Elements Of Your, The Diagonal Elements of Matrix's are : \n\n");
printf("\n Diagonal Of Matrix 1:\n\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
if(i==j)
{
printf("%d ",a[i][j]);
}
}
printf("\n");
}

printf("\n Diagonal of Matrix 2 :\n\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
if(i==j)
{
printf("%d ",b[i][j]);
}
}
printf("\n");
}

}
break;

case 7:
break;

default:
{
printf("\nYou Have Selected an Invalid Options.");
}

}

}
break;

case 7:
{
    int ch;
    system("cls");
    printf("\n1. Reverse a no.");
    printf("\n2. Palindrome no. check.");
    printf("\n3. Armstrong no. check.");
    printf("\n4. Perfect no. check.");
    printf("\n5. Prime no. check.");
    printf("\nSelect your choice (1,2,3,4,5) : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        {
            int num,rev,temp,sum=0;
            system("cls");

            printf("\nEnter a no. to reverse it : ");
            scanf("%d",&num);

            temp=num;

            while(temp!=0)
            {
                rev=temp%10;
                sum=(sum*10)+rev;
                temp=temp/10;    
            }

            printf("\nReverse of given no. %d is : %d",num,sum);
            printf("\n");
        }
        break;

        case 2:
        {
            int num,sum=0;

            system("cls");

            printf("\nEnter a no. to check whether it is palindrome or not : ");
            scanf("%d",&num);

            int    temp,rev;

            temp=num;

            while(temp!=0)
            {
                rev=temp%10;
                sum=(sum*10)+rev;
                temp=temp/10;    
            }

            printf("\nReverse : %d",sum);

            if(sum==num)
            {
                printf("\nGiven No. %d is an Palindrome no.",num);
            }
            else
            {
                printf("\nGiven No. %d is Not an Palindrome no.",num);
            }
            printf("\n");
        }
        break;

        case 3:
        {
            int num,rev,temp,count=0,sum=0;

            system("cls");

            printf("\nEnter a no. to check whether it is ARMSTRONG NO or not : ");
            scanf("%d",&num);
            
            temp=num;

            while (temp>0)
            {
                temp=temp/10;
                count++;
            }

            printf("\nNo. of Digit : %d",count);

            temp=num;

            while(temp!=0)
            {
                rev=temp%10;
                sum=sum+(pow(rev,count));
                temp=temp/10;
            }

            printf("\nSum : %d",sum);

            if (sum==num)
            {
                printf("\nGiven no. %d is an Armstrong no.",num);
            }
            else
            {
                printf("\nGiven no. %d is not an armstrong no.",num);
            }
            printf("\n");
        }
        break;

        case 4:
        {
            int i,num,sum=1;

            system("cls");

            printf("\nEnter a no. to check whether it is perfect no. or not : ");
            scanf("%d",&num);

            for(i=2;i<num;i++)
            {
                if(num%i==0)
                {
                    sum=sum+i;
                }
            }

            if(sum==num)
            {
                printf("\nGiven no. %d is an Perfect no.",num);
            }
            else
            {
                printf("\nGiven no. %d is Not an Perfect no.",num);
            }
        }
        break;

        case 5:
        {
            int i,num,flag=0;

            system("cls");

            printf("\nEnter a no. to checl wether it is prime or not : ");
            scanf("%d",&num);

            for(i=2;i<num;i++)
            {
                if(num%i==0)
                    flag=1;
                break;
            }

            if(flag==0)
            {
                printf("\nGiven no. %d is an Prime no.",num);
            }
            else
            {
                printf("\nGiven no. %d is Not an Prime no.",num);
            }
        }
        break;

        default:
        printf("\nYou Have Selected an invalid choice !\n\n");
    }
}
break;

case 8:
break;

default :
{
printf("\n\nYou Have Selected Invalid Choice!");
}

}

printf("\n\nWant To Run This Program Again ? : ");
printf("\n1. Yes");
printf("\n2. No");
printf("\nSelect Option (1,2) : ");
scanf("%d",&ch1);
}
while(ch1==1);
printf("\n");

return 0;

}
