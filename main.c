#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Lab01
int main(int argc, char *argv[]) {
	char *pc;
	int *pi;
	double *pd;
	
	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;
	
	printf("before : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	pc++;
	pi++;
	pd++;
	
	printf("after : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	return 0;
}*/

/*Lab03
int main(){
	char buffer[8];
	double *pd;
	int *pi;
	
	pd = (double *)buffer;
	*pd = 3.14;
	printf("%f\n", *(double *)buffer);
	
	pi = (int *)buffer;
	*pi = 123;
	*(pi+1) = 456;
	printf("%d %d\n", *(int*)buffer, *((int*)buffer+1));
	
	return 0;
}*/

/*Lab04
int main(){
	int i = 100;
	int *p = &i;
	int **q = &p;
	
	*p = 200;
	printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
	
	**q = 300;
	printf("i = %d, *p = %d, **q = %d\n", i, *p, **q);
	
	return 0;
}*/

/*Lab05*/
char *proverb = "All that glisters is not gold.";

void setPointer(char **q){
	*q = proverb;
}

int main(){
	char *p = "zzz";
	setPointer(&p);
	printf("%s\n", p);
	
	return 0;
}
