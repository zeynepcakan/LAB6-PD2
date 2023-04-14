#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *pnt;
    pnt = (char*)malloc(5*sizeof(char));
    strcpy(pnt, "zeynep");
    pnt = (char*)realloc(pnt,12*sizeof(char));
    strcat(pnt, " cakan");
    printf("%s",pnt);
    free(pnt);


    return 0;
}
