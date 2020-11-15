#include <stdio.h>
#include <getfile.c>
#include <closefile.c>
char selection;


int main () {

    printf("Menu Options\n\n" );
    printf("View Existing Record [V]\n" );
    printf("Create New Record [C]\n" );
    printf("Modify Existing Record [M]\n" );
    printf("Exit [X]\n\n" );
    fgets(char &selection);

   switch(selection) {
      case 'V' :
         printf("Viewing Existing Record\n" );
         getfile
         break;
      case 'C' :
         printf("Creating New Record\n" );
         createfile
         // needs content
      case 'M' :
         printf("Modify Existing Record\n" );
         getfile
         break;
      case 'X' :
         printf("Exit\n" );
         closefile
         break;
      case 'v' :
         printf("Viewing Existing Record\n" );
         getfile
         break;
      case 'c' :
         printf("Creating New Record\n" );
         createfile
         // needs content
      case 'm' :
         printf("Modify Existing Record\n" );
         getfile
         break;
      case 'x' :
         printf("Exit\n" );
         closefile
         break;
      default :
         printf("Invalid option\n" );
   }
   
   printf("Have a good day.\n");
 
   return 0;
}