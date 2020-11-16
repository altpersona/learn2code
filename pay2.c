#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
/* 
everythingArray
0 + 50 Turn ID
1 + 50 Hours in a turn
2 .. Overtime hours
3 .. Holiday Worked
4 .. Holiday Not Worked
5 .. 401k %
6 .. Roth %


*/
int i,k;
long j;
char days[8][9]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","End"};
char turns[7][9]={"First", "Second", "Third"};
int everythingArray[10000];

int hoursInput ()

{
 system("clear") /*clear output screen*/;
 i=0;
 j=0;
 k=0;
 while(strncmp(days[j]!="End")
    {
    if(k==3){k=0};
    printf("Hours worked turn %s %s", turns[k], days[j]);
    scanf("%d", &everythingArray[i]);   
    i=i+50;
    j++;
    k++;

    };
};





int main()
{
    system("clear") /*clear output screen*/;
    
    
    printf("Menu Options\n\n" );
    printf("View Existing Record [V]\n" );
    printf("Create New Record [C]\n" );
    printf("Modify Existing Record [M]\n" );
    printf("Exit [X]\n\n" );
    fgets(char &selection);

   switch(selection) 
    {
      case 'V' :
         printf("Viewing Existing Record\n" );
         getfile;
         break;
      case 'C' :
         printf("Creating New Record\n" );
         hoursInput();
         
      case 'M' :
         printf("Modify Existing Record\n" );
         getfile;
         break;
      case 'X' :
         printf("Exit\n" );
         closefile;
         break;
      case 'v' :
         printf("Viewing Existing Record\n" );
         getfile;
         break;
      case 'c' :
         printf("Creating New Record\n" );
         createfile;
         // needs content
      case 'm' :
         printf("Modify Existing Record\n" );
         getfile;
         break;
      case 'x' :
         printf("Exit\n" );
         closefile;
         break;
      default :
         printf("Invalid option\n" );
   }
   
    system("clear") /*clear output screen*/;
    printf("Have a good day.\n");
    
    return 0;
}