#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;

    cin >> a >> b >> c;

    d = a * (c * (c + 1)) / 2;

    if(d > b)
        cout << d - b << endl;
    else
        cout << 0 << endl;

    return 0;
}
