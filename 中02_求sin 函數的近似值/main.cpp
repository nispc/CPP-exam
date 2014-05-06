#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double x;
    int n;
    cin >> x >> n;

    double sum = 0;

    for(int i = 0;i < n;i++)
    {
        long double tmp = 1;

        if(i%2)
            tmp *= -1;

        for(int j = 0;j < 2*i+1;j++)
            tmp *= x;

        for(int j = 2*i+1;j >= 1 ;j--)
            tmp /= j;

        sum  += tmp;
    }

    printf("%.2f",sum); //固定位數

    return 0;
}
