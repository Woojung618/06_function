#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n); int combination(int x,int y,int z); 


int main(void) {
	int n; int r;int x;int y; int z; int result;
	printf("n값과 r값을 순서대로 입력하세요:");
	scanf("%d %d",&n,&r);
	x=factorial(n);
	y=factorial(n-r);
	z=factorial(r);
	result=combination(x,y,z);
	printf("C(%d,%d)=%d",n,r,result);
	return 0;
}
int factorial(int n){
	int res=1;int i;
	for (i=1;i<=n;i++)
		res*=i;
	return res;
}
int combination(int x,int y,int z){
	return x/(y*z);
}


