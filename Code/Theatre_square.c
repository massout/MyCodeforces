#include <stdio.h>

int main() {
	long long int a, b, c;
	

	scanf("%lli ", &a);
	scanf("%lli ", &b);
	scanf("%lli ", &c);

	if(b%c == 0 && a%c > 0){
		printf("%lli", (b/c) * (a/c + 1));
		
	} else if (b%c > 0 && a%c == 0){
		printf("%lli", (b/c+1) * (a/c));
		
	} else if (b%c == 0 && a%c == 0){
		printf("%lli", (b/c) * (a/c));
		
	} else if (b%c > 0 && a%c > 0){
		printf("%lli", (b/c+1) * (a/c+1));
	
	}
	
	return 0;
}
