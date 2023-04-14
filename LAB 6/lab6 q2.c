#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *pnt;
    pnt = (char*)malloc(13*sizeof(char));
    strcpy(pnt, "zeynep cakan");
    printf("%s",pnt);
    return 0;
}
