#include <iostream>

using namespace std;

int main()
{
    int input[4];
    char c;

    for(int i = 0;i < 4;i++)
    {
        cin.get(c);
        input[i] = c-'0';
    }

    int ouput[4];
    for(int i = 0;i < 4;i++)
    {
        int tmp = input[i];
        while(tmp%3)
            tmp += 10;
        ouput[i] = tmp/3;
    }

    for(int i = 0;i < 4;i++)
        cout << ouput[i];
    return 0;
}
