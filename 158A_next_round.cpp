#include <iostream>

using namespace std;

int main (){
    short n,k, input, count {};
    
    for (short i=0; i<n; i++){
        cin >> input;
        if (input>k){
            count++;
        }
    }

    cout << count;
}