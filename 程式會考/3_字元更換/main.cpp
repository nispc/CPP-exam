#include <iostream>

using namespace std;

void replace(char* x,int pos,char c)
{
    *(x+pos-1) = c;
}

int main()
{
    char x[100];
    cin >> x;

    int pos;
    char c;

    cin >> pos >> c;
    replace(x,pos,c);

    cout << x;

    return 0;
}
