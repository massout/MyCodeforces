#include <iostream>
#define ll long long int 

using namespace std;

int main(){
    ll a, b;

    cin >> a >> b;

    while(b>0){
        if(a%10 == 0)
            a /= 10;
        else
            a--;

        b--;
    }
 
    cout << a << endl;

    return 0;
}
