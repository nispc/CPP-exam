#include <iostream>

using namespace std;

int main()
{
    char input[100];
    cin >> input;

    int i = 0;
    int sumOdd = 0,sumEven = 0;
    while(input[i] != '\0')
    {
        if(i %2)
            sumOdd++;
        else
            sumEven++;
        i++;
    }

    if(!(sumOdd - sumEven)%11)
        cout << input <<"之奇數差為11的倍數" << endl;
    else
        cout <<  input <<"之奇偶數差不是11的倍數" << endl;

    return 0;
}
