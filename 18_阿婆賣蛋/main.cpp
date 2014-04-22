#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int num = 0;
    while(num < input)
    {
        if(num % 7 == 2 && num % 9 == 2 && num % 3 == 2)
            cout << num << endl;
        num++;
    }


    return 0;
}
