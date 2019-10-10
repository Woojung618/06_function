#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b){
	return a+b;
}
int square(int n){
	return n*n;
}
int get_max(int a, int b){
	if (a>b) return a;
	return b;
}
int main(int argc, char *argv[]) {
	int a=2; int b=5; int output;
	output=sumTwo(a,b);
	printf("sumTwo: %d\n",output);
	printf("square: %d\n",square(a));
	printf("get_max: %d\n",get_max(a,b));
	
	return 0;
}
