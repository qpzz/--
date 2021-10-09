#include<stdio.h>
int fun(int n);
int main(){
	int x,y;
	int n;
	printf("ÇëÊäÈë½×ÌİÊın:");
	scanf("%d",&n);
	printf("%d",fun(n));
	return 0;
}
int fun(int n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	else {
		return fun(n-1)+fun(n-2);
	}
	
	
}
