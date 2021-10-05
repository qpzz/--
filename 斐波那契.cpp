#include <stdio.h>
int main(){
	long int i,j;
	int g;
	i=1; j=1;
	for(g=1;g<=20;g++){
		i=i+j;
		j=j+i;
		printf("%12ld%12ld",i,j);
	}
}
