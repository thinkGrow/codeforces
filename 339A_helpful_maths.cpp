#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    
    string input;
    cin >> input;

    short len_input = input.length();
    string n = "";

    for (int i=0; i<len_input; i+=2)
    {
        n = n + input[i];
    }

    sort(n.begin(), n.end());


    short len_n = n.length();

    for (int i=0; i<len_n; i++)
    {
        if(i!=len_n-1){
            cout << n[i] << "+";
        }
        else{
            cout << n[i];
        }
    }

    



    return 0;
}