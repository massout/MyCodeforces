#include <iostream>
#include <string>

using namespace std;


int main(){
	string a, b, c;
	
	cin >> a >> b;
	
	int d = a.size()-1;
	
	while(d > -1){
		c.push_back(a[d]);
		
		d--;
	}

	if(b.compare(c) == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	
	return 0;
}
