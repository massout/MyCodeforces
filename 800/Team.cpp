#include<iostream>

int main(){
	
	int a,b,c,d,e=0,f=0;
	
	scanf("%d",&d);
	
	do{
		scanf("%d %d %d",&a,&b,&c);
		if(a+b+c >= 2){
			e++;
		}
		f++;
	}while(f<d); 
	
	printf("%d",e);
	return 0;
}
