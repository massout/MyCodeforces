#include <iostream>
#include <string>

using namespace std;


int main(){
	string a;
	int b, anton = 0, danik = 0;
	
	cin >> b >> a;
	
	while(b > 0){
		
		if(a[b-1] == 'A')
			anton++;
		else 
			danik++;
		
		b--;
	}

	if(anton == danik)
		cout << "Friendship" << endl;
	else
		anton < danik ? cout << "Danik" << endl : cout << "Anton" << endl;
	
	
	return 0;
}
