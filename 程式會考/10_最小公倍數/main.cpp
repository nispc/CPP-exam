#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int lcm = (m>n)?m:n;

    while(lcm%m||lcm%n)
        lcm++;

    cout << lcm;

    return 0;
}
