#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int input;
    cin >> input;

    bool flag = false;
    for(int i = 2;i <= sqrt(input);i++)
        if(!(input%i))
            flag = true;
    if(flag)
        cout << "Y"<< endl;
    else
        cout << "N" << endl;
    return 0;
}
