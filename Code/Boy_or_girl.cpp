#include <iostream>
#include <string>

using namespace std;

int main(){
    string alfa;
    int beta = 0;

    cin >> alfa;

    for(int i=0; i<alfa.length(); i++){
        for (int j=i+1; j<alfa.length(); j++){
            if(alfa[i] == alfa[j]){
                alfa[j] = '0';
            }
        }
    }


    for(int a=0; a<alfa.length(); a++){
        if(alfa[a] == '0')
            continue;
        
        beta++;
    }

    if(beta%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
