#include <iostream>
#include <string>

using namespace std;


int main(){
	string a;
	
	cin >> a;
	int b = a.size();
	int d = 0;
	
	while(b > -1){
		if(a[b] == '4' || a[b] == '7'){
			d++;
		}
		
		
		b--;
	}
	
	if(d == 4 || d == 7)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
		
	return 0;
}
