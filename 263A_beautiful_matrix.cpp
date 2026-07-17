#include <iostream>
#include <cmath>

using namespace std;

int main(){
    short i,j {};
    short arr[5][5];
    short active_i, active_j {};
    short min_i, min_j {};

    for (i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>> arr[i][j];

            if (arr[i][j] == 1)
            {
                active_i = i;
                active_j = j;
            }
        }

    }

    min_i = abs(2-active_i) ;
    min_j = abs(2-active_j);

    cout << min_i + min_j;

    // cout<< arr[2][2];




}