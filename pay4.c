#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int i, k, dd , mm, yy, turn, day, month, year, badge, grade,zone[1000];
char selection,hWArray[1000],hNWArray[1000];
char days[7][9]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
char longturn[4][7]={"Error","First","Second","Third"};
float base,shift,incent,noninc,ot,sunpre,holw,holnw,gross,vac,bigArray[1000],secondArray[1000];
char badgeletter;

int dd=1;
int turn=1;
int i=0;

int vbadge()
{
  int badge = 0;
  printf("\nEnter Badge Number :");
  scanf(" %d", &badge);
  return badge;
}
int main()
{
    system("clear") /*clear output screen*/;
    printf("Pay Calculator\n\n" );
    int badge = vbadge();
    while(badge <= 1 || badge >= 1000)
    {
        badge = vbadge();
    }
    system("clear") /*clear output screen*/;
        while(dd<=7)
        {
            while(turn<=3)
            {
                printf("Employee ID %d\n", badge);
                printf("Enter hours worked for %s \n", days[dd]);
                printf("Enter hours worked for turn %s :", longturn[turn]);
                scanf(" %f", &bigArray[i]);
                printf("overtime hours? :");
                scanf(" %f", &secondArray[i]);
                printf("Holiday Worked? (y/n) :");
                scanf(" %c", &hWArray[i]);
                printf("Holiday Not Worked? (y/n) :");
                scanf(" %c", &hNWArray[i]);
                printf("Zone :");
                scanf(" %d", &zone[i]);
                i++;
                turn++;
                system("clear") /*clear output screen*/;
            };
            dd++;
            turn=1;
        };

   
    //system("clear") /*clear output screen*/;
    printf("Have a good day.\n");
    
    return 0;
}