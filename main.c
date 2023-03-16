#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
//billing system
int g=1,tot=0;

void order();
void menu()
{
    printf("\n::Menu::\n");
    printf("1.Samosa @20\n");
    printf("2.Dosa @35\n");
    printf("3.Tea @10\n");
    printf("0.Exit\n");
    printf("Enter your Choice: ");
    order();
}

void billing(int price,int c)
{
    int plates=0;
    if(c==3)
    printf("Enter number of Cups?\n");
    else
    printf("Enter number of plates?\n");
    scanf("%d",&plates);//2
    tot=tot+(price*plates);
}

void order()
{
    int ch=0,amt=0;
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
       //20
       billing(20,1);
        break;
    case 2:
       //35
       billing(35,2);
        break;
    case 3:
       //10
       billing(10,3);
        break;
    case 0:
        g=0;
        printf("your bill amount : %d\n",tot);
        printf("Enter you Cash amount\n");
        scanf("%d",&amt);
        amt=amt-tot;
        if(amt>0)
        printf("Your cash : %d\n",amt);

        printf("\nTHANK YOU VISIT AGAIN!!\n");
        break;
    default:
        printf("Wrong input Re-enter\n");
        menu();
        break;

    }

}

int main()
{
printf("Welcome to hotel yashasvi\n");
while(g)
{
menu();
}
return 0;
}


