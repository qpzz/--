#include<stdio.h>
int f(int n){
	if(n==1||n==2)
	return 1;
	else return f(n-2)+f(n-1);
}
int main(){
	int i=0,n=0;
	printf("ÇëÊäÈëÏîÊın:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("f(%d)=%d\n",i,(f(i)));
	}
}
