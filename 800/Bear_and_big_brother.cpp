#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b, c=0;

    cin >> a >> b;

    while(1){
        a *= 3;
        b *= 2;

        c++;

        if(a > b)
            break;
    }

    cout << c << endl;

    return 0;
}
