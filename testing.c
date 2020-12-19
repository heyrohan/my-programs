#include<stdio.h>

struct student
{
    int no;
    char name[50];
};

int main()
{
    struct student st;
    printf("\nEnter roll no. : ");
    scanf("%d",&st.no);
    printf("\nEnter name : ");
    fflush(stdin);
    //gets(st.name);

    scanf("%[^\n]s",st.name);

    printf("\nStudent name : %s",st.name);
    fflush(stdout);
    printf("\nStudent roll no. : %d",st.no);
    return 0;
}