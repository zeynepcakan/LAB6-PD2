#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr, max,i;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr+i);
    }

    max = ptr[0];
    for (i = 1; i < n; i++) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
    }

    printf("The maximum value is: %d\n", max);

    free(ptr);

    return 0;
}
