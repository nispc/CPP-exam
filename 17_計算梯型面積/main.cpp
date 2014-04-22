#include <iostream>

using namespace std;

int main()
{
    int upper,lower,height;
    while(cin >> upper >> lower >> height)
    {
        cout << (upper+lower)*height/2 << endl;
    }
    return 0;
}
