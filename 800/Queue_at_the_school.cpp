#include <iostream>
#include <string>

using namespace std;

int main(){
    string alfa;
    int a, b;
    
    cin >> a >> b >> alfa;
    
    while(b){
        for(int i=0; i < a-1; i++){
            if(alfa[i] == 'B' && alfa[i+1] == 'G'){
                alfa[i] = 'G';
                alfa[i+1] = 'B';
                i++;
            }
        }
        
        b--;
    }
    
    cout << alfa << endl;
    
    return 0;
}
