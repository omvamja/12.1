//
// Q2.
//
#include<stdio.h>

struct emp
{
    int id;
    char name[50];
    int age;
    char role[50];
    char city[50];
    int expe;
    char company_name[50];
};

void main()
{
    int i,n;
    
    printf("Enter number of employes :-");
    scanf("%d",&n);
    
    struct emp s[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter ID :- ");
        scanf("%d",&s[i].id);
        printf("Enter Name :- ");
        scanf("%s",&s[i].name);
        printf("Enter Age :- ");
        scanf("%d",&s[i].age);
        printf("Enter Role :- ");
        scanf("%s",&s[i].role);
        printf("Enter City :- ");
        scanf("%s",&s[i].city);
        printf("Enter Experience :- ");
        scanf("%d",&s[i].expe);
        printf("Enter Company name :- ");
        scanf("%s",&s[i].company_name);
        printf("\n");
    }
    printf("\n\n");
    
    for(i=0;i<n;i++)
    {
       printf("\n");
       printf("ID :- %d\n",s[i].id);
       printf("Name :- %s\n",s[i].name);
       printf("Age :- %d\n",s[i].age);
       printf("Role :- %s\n",s[i].role);
       printf("City :- %s\n",s[i].city);
       printf("Experience :- %d\n",s[i].expe);
       printf("Company name :- %s\n",s[i].company_name);
       printf("\n");
    }
}
