#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int i, k, dd , mm, yy, turn, day, month, year, grade,zone[1000],loop;
char selection,hWArray[1000],hNWArray[1000];
char days[7][9]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
char longturn[4][7]={"Error","First","Second","Third"};
char badge[6];
float base,hours,ot,shift,incent,noninc,ot,sunpre,holw,holnw,gross,vac,bigArray[1000],secondArray[1000];
char badgeletter;

int dd=0;
int turn=1;
int i=0;
void report()
{
    hours=0;
    ot=0;
    system("clear") /*clear output screen*/;
    printf("Employee ID %s \n", badge);
    for(k = 999; loop >= 0; loop--) 
    {
        hours = hours + bigArray[loop];      
        ot = ot + secondArray[loop];      
    }
    //
    
    const char* fileType = ".txt";
    const int count = 1;
    char name_buffer[512];
    FILE* f = NULL;
    int i;
    for(i=0; i<count; i++)
    {
    //Print to character buffer
    sprintf(name_buffer,"%s%s",badge,fileType);
    f = fopen(name_buffer,"w");
    /* Write Data */

    //
    printf("Hours worked in period %6.2f \n", hours);
    //fputs("Hours worked in period %6.2f \n", hours);
    //fputs("Overtime worked in period %6.2f \n", ot);
    printf("Overtime worked in period %6.2f \n", ot);
fclose(f);
};
return ;

};
int main()
{
    system("clear") /*clear output screen*/;
    printf("Pay Calculator\n Version .005002\n" );
    printf("Enter Employee ID : ");
    scanf("%s", badge);
    system("clear") /*clear output screen*/;
        while(dd<=0) //  7
        {
            while(turn<=1) //3
            {
                printf("Employee ID %s\n", badge);
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
    report();
   
    //system("clear") /*clear output screen*/;
    printf("Have a good day.\n");
    
    return 0;
}