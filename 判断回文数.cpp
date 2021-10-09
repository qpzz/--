#include<stdio.h>
#include<string.h>
int main(void){
	int i,j,len;
	char S1[1005];
	char S2[1005];
	printf("ÇëÊäÈëÒ»´®×Ö·û:");
	gets(S1);
	len=strlen(S1);
for(i=len-1,j=0;i>=0;i--,j++){
	S2[j]=S1[i];
}
for(i=0,j=0;i<len;i++,j++){
	if(S1[i]!=S2[i]){
		printf("¸Ã×Ö·û´®²»ÊÇ»ØÎÄ×Ö·û´®");
		break;
	}
	else if(i==len-1){
		printf("¸Ã×Ö·û´®ÊÇ»ØÎÄ×Ö·û´®");
	}
}
}

