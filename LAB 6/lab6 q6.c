#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int c, *b, **a;
	c = 4;
	b = &c;
	a = &b;
	
	//printf("c=%d , b=%d , a=%d\n",c,*b,**a);
	
	
	printf("%d",f(c,b,a));
	
	return 0;
}

int f(int x, int *py, int **ppz){
	
	printf("x=%d\n",x);
	printf("*py=%d\n",*py);
	printf("**ppz=%d\n",**ppz);
	
	**ppz += 1;
	printf("x=%d\n",x);//x=4
	printf("**ppz=%d\n",**ppz); //**ppz=5
	printf("*py=%d\n",*py); //*py=5
	
	x= *py * **ppz;
	printf("x=%d\n",x);//x=25
	
	*py *= 2;
	printf("*py=%d\n",*py);//*py=10
	printf("**ppz=%d\n",**ppz);//**ppz=10;
	
	x *= *py+3;
	printf("x=%d\n",x);//x=325;
	
	return (x+ *py + **ppz);
	 
}
