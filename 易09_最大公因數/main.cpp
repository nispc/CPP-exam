#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    while(n > 0)
    {
        int tmp = m%n;
        m = n;
        n = tmp;
    }

    cout << m;

    return 0;
}
