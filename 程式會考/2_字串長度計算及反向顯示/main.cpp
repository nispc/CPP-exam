#include <iostream>

using namespace std;

void strlen(char *x)
{
    int i = 0;
    while(x[i] != '\0')
        i++;
    cout << "字串長度：" << i << endl;
}

void revs(char *x)
{
    int i = 0;
    while(x[i] != '\0')
        i++;
    int length = i;


    for(i = 0;i < (length-1)/2;i++)
        swap(x[i],x[length-1-i]);

    cout << "反轉後字串："<<x;
}

int main()
{
    char input[100];
    cin >> input;

    strlen(input);
    revs(input);

    return 0;
}
