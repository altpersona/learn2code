#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// ints 
int i, k,dd , mm, yy, turn, day, month, year, grade,zone[1000],loop;

//chars
char selection,hWArray[1000],hNWArray[1000];
char days[7][9]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
char longturn[4][7]={"Error","First","Second","Third"};
char badge[6], date[10],stringEID[12],stringHWiP[25],stringOWiP[25],stringEHW[],stringOH[], stringHW[], stringHNW[],stringZ[];

//floats
float base,half,icf[5],pInc,increg[1000],shiftArry[3],rate,hours,hoursHW,hoursHNW,ot,shift,incent,noninc,ot,sunpre,holw,holnw,gross,vac,bigArray[1000],secondArray[1000],bigArrayBase[1000],bigArrayShift[1000];

// value declarations
float half =.5;
float pInc=.5;
float rate=26.65;
float shiftArray[]= {0,.35,.5};
float icf[]= {7.00,7.67,8.5,9.735,11.565};
float increg[1000];
int dd=0;
int turn=1;
int i=0;
char stringEID[]= "Employee ID";
char stringHWiP[]= "Hours worked in period ";
char stringOWiP[]= "Overtime worked in period";
char stringEHW[]= "Enter hours worked";
char stringOH[]= "Overtime hours";
char stringHW[]= "Holiday Worked";
char stringHNW[]= "Holiday Not Worked";
char stringZ[]= "Zone :";

void firstThings()
{
    system("clear") /*clear output screen*/;
    printf("Pay Calculator\n Version .006001\n" );
    printf("Enter %s : ",stringEID);
    scanf("%s", badge);
    printf("Enter Week Ending date : ");
    scanf("%s", date);
    system("clear") /*clear output screen*/;
};
void inputData()
{

        while(dd<=0) //  7
        {
            while(turn<=1) //3
            {
                printf("%s %s\n", stringEID,badge);
                printf("%s for %s \n", stringEHW,days[dd]);
                printf("%s for turn %s :", stringEHW,longturn[turn]);
                scanf(" %f", &bigArray[i]);
                printf("%s? :", stringOH);
                scanf(" %f", &secondArray[i]);
                printf("%s? (y/n) :", stringHW);
                scanf(" %c", &hWArray[i]);
                printf("%s? (y/n) :", stringHNW);
                scanf(" %c", &hNWArray[i]);
                printf("%s", stringZ);
                scanf(" %d", &zone[i]);
                i++;
                turn++;
                system("clear") /*clear output screen*/;
            };
            dd++;
            turn=1;
        };
};
void firstCalc()
{
{

        while(dd<=0) //  7
        {
            while(turn<=1) //3
            {
                bigArrayBase[i]=bigArray[i]*rate;
                if(turn==2)
                {
                bigArrayShift[i]=bigArray[i]*shiftArray[1];
                };
                if(turn==3)
                {
                bigArrayShift[i]=bigArray[i]*shiftArray[2];
                };
                increg[i]=bigArray[i]*pInc*icf[4];
                /*
                            
                avgHR
                sum:base +shift +inc.reg+holdW / hours

                ot
                hoursOT * avgHR * .5

                sun.pre
                sunday base * avgHR *.5

                holdW 
                holdRate * holdW

                holdNW 
                avgHR * holdNW

                gross
                base + shift + inc.reg + ot + sun.pre + holdW + holdNW

                */
                
                i++;
                turn++;
                
            };
            dd++;
            turn=1;
        };
};

};
void report()
{
    hours=0;
    ot=0;
    system("clear") /*clear output screen*/;
    printf("%s %s \n", stringEID,badge);
    for(k = 999; loop >= 0; loop--) 
    {
        hours = hours + bigArray[loop];      
        ot = ot + secondArray[loop];      
    }
    //
    const char* dot = ".";
    const char* fileType = ".txt";
    const int count = 1;
    char name_buffer[512];
    FILE* f = NULL;
    int i;
    for(i=0; i<count; i++)
    {
    //Print to character buffer
    sprintf(name_buffer,"%s%s%s%s",badge,dot,date,fileType);
    f = fopen(name_buffer,"w");
    /* Write Data */
    
    fprintf(f,"%s %s ", stringEID, badge);
    fprintf(f,"%s %8.2f ", stringHWiP,hours);
    fprintf(f,"%s %7.2f ", stringOWiP,ot);
    fprintf(f,"%s %7.2f ", stringHW, hoursHW);
    fprintf(f,"%s %7.2f ", stringHNW, hoursHNW);    
    //fpritnf(f,"%s %6.2f, stringZ, hourZ1 - 5);

fclose(f);
};
return ;

};
int main()
{

//functions 
    firstThings();
    inputData();
    report();
   
    //system("clear") /*clear output screen*/;
    printf("Have a good day.\n");
    
    return 0;
}