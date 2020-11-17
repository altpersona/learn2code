#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    char const* const fileName = argv[1]; /* should check that argc > 1 */
    char userstr[256];
    int specailtest;
    FILE* file = fopen(fileName, "r"); /* should check the result */
    if (argc < 2) {
        printf("No input file was given, good day.\n");
        return 1;
    }
    char line[256];

    while (fgets(line, sizeof(line), file)) {
        /* note that fgets don't strip the terminating \n, checking its
           presence would allow to handle lines longer that sizeof(line) */
        if (line[0] == '\n' || line[0] == '^M') {
            continue;
        }
        if (line[0] == '/' && line[1] == '/') {
            continue;
        }
        if (line[0] == '/' && line[1] == '*') {
            continue;
        }
      
        char buf[120]; // assumes at most 120 character comments
        int MyTest;
        while (strcmp(line, userstr) !=10) {
            MyTest = (strcmp(line, userstr));
            //printf("%d\n", MyTest);
            system ("clear");
            printf("%s", line);
            scanf("%[^\n]%*c", userstr);
        }
    }
    fclose(file);
    return 0;
}

// I am not good at this, just sharing my misery. Enjoy the show.
