#include<stdio.h>
#include<math.h>

int main(){
	char arr[200];
	int a,b=0,i, bir=0, iki=0, uc=0;
	char temp;
	
	scanf("%[^\n]s",arr);
	
	for(i=1;arr[i] != '\0';i++);
	
	if(i>1){
		for(a=0; a<=i; a += 2){
			if(arr[a] == '1') bir++;
			if(arr[a] == '2') iki++;
			if(arr[a] == '3') uc++;
		}
		
		for(a=0; a<=i; a+=2){
			if(bir>0){
				arr[a] = '1';
				bir--;
			}else if(iki>0){
				arr[a] = '2';
				iki--;
			}else if(uc>0){
				arr[a] = '3';
				uc--;
			}
		}
		
		puts(arr);	
	}else{
		puts(arr);
	}
	
	
	return 0;
}
