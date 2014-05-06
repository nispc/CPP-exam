#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int input[n];

    for(int i = 0;i < n;i++)
        cin >> input[i];

    int big1 = 0,big2 = 0;
    for(int i = 0;i < n;i++)
    {
        if(input[i] > big1)
        {
            big2 = big1;
            big1 = input[i];
        }
        else if(input[i] > big2)
        {
            big2 = input[i];
        }
    }

    for(int i = 0;i < n;i++)
        cout << input[i] << " ";
    cout << endl;

    cout << big1 << " " << big2 << endl;

    return 0;
}
