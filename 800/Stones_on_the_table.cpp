#include <iostream>
#include <string>

using namespace std;

int main(){
    string alfa;
    int x;

    cin >> x;
    cin >> alfa;

    int red=0, green=0, blue=0;

    for(int j=0; j<x-1; j++){
        if(alfa[j] == alfa[j+1] && alfa[j] == 'R'){
            red++;
        }else if(alfa[j] == alfa[j+1] && alfa[j] == 'G'){
            green++;
        }else if (alfa[j] == alfa[j+1] && alfa[j] == 'B'){
                blue++;
        }
    }   

    cout << red + blue + green << endl;

    return 0;
}
