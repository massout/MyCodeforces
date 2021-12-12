#include<iostream>
#include<string.h>

int main() {
	
	int a,i=0;
	char arr[101][101];
	
	scanf("%d",&a);
	
	
	
	do{
		gets(arr[i]);
		i++;
		
	}while(i<a+1);
	

	
	for(int k=0;k<a+1;k++){
		if(strlen(arr[k]) > 10){
			printf("%c%d%c\n",arr[k][0],strlen(arr[k])-2,arr[k][strlen(arr[k])-1]);
		}else{
			puts(arr[k]);
		}
		
	}
	
	return 0;
}
