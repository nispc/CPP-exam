#include <iostream>

using namespace std;

int x[200];
int y[50];
bool used[200];
bool success[50];
int n,m;

void dfs(int d)
{
    if(d < n)
    {
        used[d] = true;
        dfs(d+1);
        used[d] = false;
        dfs(d+1);
    }
    else
    {
        int sum = 0;
        for(int i = 0;i < n;i++)
        {
         //   cout << used[i] << " ";
            if(used[i])
                sum += x[i];
        }
        //cout << sum << endl;

        for(int i = 0;i < m;i++)
        {
            if(y[i] == sum)
                success[i] = true;
        }
    }
}

int main()
{
    int input;
    cin >> input;
    while(input--)
    {
        cin >> n >> m;

        for(int i = 0;i < n;i++)
            cin >> x[i];

        for(int i = 0;i < m;i++)
            cin >> y[i];

        for(int i = 0;i < n;i++)
            used[i] = false;

        for(int i = 0;i < m;i++)
            success[i] = false;

        dfs(0);

        int sum = 0;
        for(int i = 0;i < m;i++)
            if(success[i])
                sum++;
        cout << sum << endl;
    }
    return 0;
}
