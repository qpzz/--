#include<stdio.h>
void printf(int n){
	if(n>9){
		printf(n/10);
	}
	printf("%d",n%10);
}
int main(){
	int num=0;
	scanf("%d",&num);
	printf(num);
}
