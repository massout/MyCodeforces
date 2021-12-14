#include<stdio.h>

int main(){
	char arr[1000];
	
	gets(arr);
	
	if( 'a' <= arr[0] &&  arr[0] <= 'z'){
		arr[0] -= 32;
		puts(arr);
	} else {
		puts(arr);
	}
	
	return 0;
}
