#include <iostream>

using namespace std;

int main()
{
    char c;
    int tmp = 0,index = 0;
    int x[30] = {};

    while(cin.get(c))
    {
        if(c < '0' || c > '9')
        {
            x[index] = tmp;
            tmp = 0;
            index++;
            if(c == '\n')
                break;
        }
        else
        {
            tmp*=10;
            tmp+=c-'0';
        }
    }

    int sum = 0;
    for(int i = 0;i < index;i++)
        sum += x[i];
    double avg = (double)sum/index;

    double var = 0;

    for(int i = 0;i < index;i++)
    {
        double tmp = x[i] - avg;
        tmp *= tmp;
        var += (double)tmp/index;
    }

    cout << var;

    return 0;
}
