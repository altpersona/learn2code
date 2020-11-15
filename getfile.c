#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int getFile(int argc, char* argv[])
{
    char const* const fileName = argv[1]; /* should check that argc > 1 */
    char userstr[256];
    int specailtest;
    FILE* file = fopen(fileName, "r"); /* should check the result */
    if (argc < 2) {
        printf("No input file was given, good day.\n");
        return 1;
    }
    