#include<stdio.h>
struct customer{
    char cname[30];
    int units;
    int bill;
};

int main()
{
    struct customer c1;
    int famt=100,units,amt;
    float surcharge;
    printf("enter the name:");
    scanf("%s\n",c1.cname);
    printf("enter the no of units consumed:");
    scanf("%d\n",&units);

    if (units<100)
        {
            amt=100;
            printf("%d",amt=100);
        }
    else if(units<101)
        {
             amt=(units*5);
             printf("amt=%d,units=%d",amt,units);
        }
    else if((units>100)&&(units<=200))
        {
             amt=(units*7);
             printf("amt=%d,units=%d",amt,units);
        }
    else
        {
             amt=(units*10);
             printf("amt=%d,units=%d",amt,units);
        }
 if(amt>1000)
    {
        surcharge=amt*0.05;
        amt=(0.05*amt)+amt;

    }
 printf("cname:%s",c1.cname);
 printf("cname:%d",units);
 printf("cname:%d",amt);
 printf("cname:%d",surcharge);
}

