/*未考慮大數運算*/

#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    long long int tmp1 = 1,tmp2 = 1;

    for(int i = n+1;i <= m;i++)
        tmp1 *= i;

    for(int i = 1;i <= (m-n) ;i++)
        tmp2 *= i;

    cout << tmp1/tmp2 << endl;

    return 0;
}
