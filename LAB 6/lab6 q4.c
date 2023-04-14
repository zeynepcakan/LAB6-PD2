#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,dizi[100],n;
	
	printf("Please enter the array size: ");
	scanf("%d",&n);
	
	int *p= dizi;
	
	p=(int*) malloc(n * sizeof(int));
	
	if(p==NULL){
		printf("Error!!! Memory not allocated.");
		exit(0);
	}
	
	printf("Pleasse enter the array's elements; \n");
	
	for(i=0; i<n; i++){
		
		printf("array[%d]= ",i);
		scanf("%d",p+i);
		
	}
	
	printf("what is the new array size:  ");
	scanf("%d",&n);
	
	p=(int*) realloc(p, n * sizeof(int));
	
	if(p==NULL){
		printf("Error!!! Memory not allocated.");
		exit(0);
	}
	
	printf("Please enter the new elements of the array; \n");
	
	for( ; i<n; i++){
		
		printf("array[%d]= ",i);
		scanf("%d",p+i);
		
	}
	
	free(p);
	return 0;
}
