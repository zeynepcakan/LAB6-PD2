#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *pnt, *pnt1;
    int n, c = 0, k = 0;
    printf("enter size of array\n");
    scanf("%d", &n);
    pnt = (char*)malloc(n * sizeof(char));
    printf("enter string\n");
    fflush(stdin);
    fgets(pnt, n, stdin);

  
    for (pnt1 = pnt; *pnt1 != '\0'; pnt1++, c++);
    pnt1--;

    for (k = c; k > 0; pnt1--, k--)
    {
        printf("%c", *pnt1);
    }

    free(pnt);
    return 0;
}
