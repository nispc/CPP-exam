#include <iostream>
using namespace std;

void matrixAdd(int *x,int *y)
{
    for(int i = 0; i < 9; i++)
    {
        if(!(i%3))
            cout << endl;
        cout << x[i] + y[i] << " ";
    }
}

int main()
{
    int x[9],y[9];

    for(int i = 0; i < 9; i++)
        cin >> x[i];

    for(int i = 0; i < 9; i++)
        cin >> y[i];

    matrixAdd(x,y);

    return 0;
}