#include<stdio.h>
#define max_users 5
struct user{
    int id;
    char name[100];
    int balance;
    };
int main()
{
    struct user users[max_users];
    for(int i=0;i<max_users;i++)
    {
       printf("enter the id:");
       scanf("%d",&users[i].id);
       printf("enter the balance:");
       scanf("%d",&users[i].balance);
    }
    for(int i=0;i<max_users;i++)
    {
      printf("userid:%d\n",users[i].id);
      printf("balance:%d\n",users[i].balance);
    }

    int find;
    printf("enter the userid to check the balance:");
    scanf("%d",&find);

    for(int i=0;i<max_users;i++)
    {
      if(find ==users[i].id)
    {
       printf("balance of the user d: %d",find, users[i].balance);
    }

    }
}



