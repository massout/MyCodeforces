#include <iostream>
#include <string>

using namespace std;

int main(){
    string alfa;
    int a=0, b=0;

    cin >> alfa;

    for(int i=0; i<alfa.length(); i++){
        if('a' <= alfa[i] && alfa[i] <= 'z')
            a++;
        else if('A' <= alfa[i] && alfa[i] <= 'Z')
            b++;
    }

    if(a<b){
        for(int i=0; i<alfa.length(); i++){
            if('a' <= alfa[i] && alfa[i] <= 'z')
                alfa[i] -= 'a' - 'A';
        }
    }else {     
        for(int i=0; i<alfa.length(); i++){
            if('A' <= alfa[i] && alfa[i] <= 'Z')
                alfa[i] += 'a' - 'A';
        }
    }
    



    cout << alfa << endl;

    return 0;
}
