#include <iostream>

using namespace std;

int main()
{
    int sec;
    cin >> sec;

    double cost = 0.16 * sec;
    cost = sec>600?cost*0.7:sec>300?cost*0.8:cost>180?cost*0.9:cost;
    cout << cost;

    return 0;
}
