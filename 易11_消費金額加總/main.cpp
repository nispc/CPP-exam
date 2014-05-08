#include <iostream>

using namespace std;

int main()
{
    char c;
    int tmp = 0;
    int sum = 0;

    while(cin.get(c))
    {
        if(c < '0' || c > '9')
        {
            sum += tmp;
            tmp = 0;
            if(c == '\n')
                break;
        }
        else
        {
            tmp*=10;
            tmp+=c-'0';
        }
    }

    cout << sum;
    return 0;
}
