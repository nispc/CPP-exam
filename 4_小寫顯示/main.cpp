#include <iostream>

using namespace std;

int main()
{
    char input[100];
    cin >> input;

    int i = 0;
    while(input[i] != '\0')
    {
        if(input[i] >= 'A' && input[i] <= 'Z')
            input[i] = input[i] - 'A' + 'a';
        i++;
    }

    cout << input;

    return 0;
}
