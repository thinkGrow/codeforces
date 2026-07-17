#include <iostream>
#include <cmath>

using namespace std;

int main(){
    short i,j {};
    short row, col, x {};

    for (i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>> x;

            if (x == 1)
            {
                row = i;
                col = j;
            }
        }

    }

    cout << abs(2-row) + abs(2-col);






}