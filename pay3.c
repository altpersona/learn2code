#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
/* Notes

https://www.includehelp.com/c-programs/store-date-in-integer-variable.aspx
*/
int i,k;
long j;
int dd,mm,yy;
int weekending;
char selection;

struct week
{
    int day,month,year,badge,grade;
    float base,shift,incent,noninc,ot,sunpre,holw,holnw,gross,vac;
    int turn;
    char badgeletter;
    
};

void datee (int weekending)
{
    printf("Enter Week Ending date (dd/mm/yy) format: ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    //fgets(&dd,2,stdin);
    //printf("\nEntered date is: %02d/%02d/%04d\n",dd,mm,yy);
     
    /*adding dd,mm,yy into date*/
    /*an integer has 4 bytes and dd range is 1 to 31 , mm range is 1 to 12 which
     *can be stored in 1 byte, 1 byte and in rest of 2 bytes
     *we can store year.*/
     while (dd<=1 | dd >=32 | mm <=1 | mm>=13 | yy<=2019 | yy>=3000) 
     {  printf("Try again: ");
        scanf("%d/%d/%d",&dd,&mm,&yy);
     } ;
     weekending=0;
     weekending   |= (dd&0xff); /*dd storing in byte 0*/
     weekending   |= (mm&0xff)<<8; /*mm storing in byte 1*/
     weekending   |= (yy&0xffff)<<16; /*yy storing in byte 2 and 3*/
};
void inputHours()
{

};
int main()
{
    system("clear") /*clear output screen*/;
    printf("Menu Options\n\n" );
    printf("View Existing Record [V]\n" );
    printf("Create New Record [C]\n" );
    printf("Modify Existing Record [M]\n" );
    printf("Exit [X]\n\n" );
    scanf("%c", &selection);

   switch(selection) 
    {
      case 'V' :
         printf("Viewing Existing Record\n" );
         //getfile;
         break;
      case 'C' :
         printf("Creating New Record\n" );
         datee(weekending);

         //hoursInput();
         break;
      case 'M'  :
         printf("Modify Existing Record\n" );
         //getfile;
         break;
      case 'X' :
         printf("Exit\n" );
        // closefile;
         break;
      case 'v' :
         printf("Viewing Existing Record\n" );
         //getfile;
         break;
      case 'c' :
         printf("Creating New Record\n" );
         datee (weekending);
         // needs content
         break;
      case 'm' :
         printf("Modify Existing Record\n" );
         //getfile;
         break;
      case 'x' :
         printf("Exit\n" );
         //closefile;
         break;
      default :
         printf("Invalid option\n" );
   }
   
    //system("clear") /*clear output screen*/;
    printf("Have a good day.\n");
    
    return 0;
}