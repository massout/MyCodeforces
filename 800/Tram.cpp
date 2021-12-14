#include <iostream>

using namespace std;

int main(){
    int a, b, c, d=0, e=0;

    cin >> a;

    while(a>0){
        cin >> b >> c;

        d += c-b;

        if(d>e)
            e=d;

        a--;
    }

    cout << e << endl;

    return 0;
}
