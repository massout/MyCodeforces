#include <iostream>

using namespace std;

int main(){
    long long int a;

    cin >> a;

    if(a/5.0 <= 1)
        cout << 1 <<endl;
    else if(a%5 > 0)
        cout << a/5 + 1 << endl;
    else if(a%5 == 0)
        cout << a/5 << endl;

    return 0;
}
