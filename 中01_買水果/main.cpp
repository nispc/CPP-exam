#include <iostream>

using namespace std;

int q[3];  //quantity
int limit; //input limit

void dfs(int n)
{
    if(n == 0)
    {
        for(int i = 5; i <= limit/5 ; i+=5)
        {
            q[0] = i;
            dfs(1);
        }
    }
    else if(n == 1)
    {
        for(int i = 3; i <= limit/6 ; i+=3)
        {
            q[1] = i;
            dfs(2);
        }
    }
    else if(n == 2)
    {
        for(int i = 2; i <= limit/10 ; i+=2)
        {
            q[2] = i;
            dfs(3);
        }
    }
    else
    {
        int sum = q[0]*5 + q[1]*6 + q[2]*10;
        if(sum >= 100 && sum <= limit)
        {
            for(int i = 0; i < 3; i++)
                cout << q[i] << " ";
            cout << endl;
        }
    }
}

int main()
{
    cin >> limit;
    dfs(0);

    return 0;
}
