#include <iostream>

using namespace std;

int main()
{
    int input[30];
    int n;
    cin >> n;

    for(int i = 0;i < n;i++)
        cin >> input[i];

    for(int i = 0;i < n-1;i++)
        for(int j = i+1;j < n;j++)
            if(input[i] > input[j])
                swap(input[i],input[j]);

    for(int i = 0;i < n;i++)
        cout << input[i] << " ";

    return 0;
}
