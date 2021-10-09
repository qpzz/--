#include<stdio.h>
int jiecheng(int n);
int main(void){
	int n;
	scanf("%d",&n);
	if(n>0&&n<=10)
	printf("%d\n",jiecheng(n));
	return 0;
}
int jiecheng(int n){
	if(n==0)
	return 1;
	else if(n>0)
	return n*jiecheng(n-1);
}
