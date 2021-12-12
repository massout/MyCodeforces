#include<iostream>

int main() {
	
	int w,b=0;
	
	scanf("%d",&w);
	
	for(int i = 1;i<w;i+=1){
		if((w-i)%2==0 && i%2==0){
			b++;
		}	
	}
	
	if(b>=1){
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0;
}
