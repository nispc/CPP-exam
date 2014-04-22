#include <iostream>

using namespace std;

int main()
{
    string specialNum,normalNum;
    getline(cin,specialNum);
    getline(cin,normalNum);

    string input;

    int specialCount = 0;
    int normalCount[6] = {};

    while(getline(cin,input))
    {
        if(input == specialNum)
            specialCount++;
        else
            for(int i = 0;i < 6; i++)
                if(input.substr(i) == normalNum.substr(i))
                {
                    normalCount[i]++;
                    break;
                }
    }

    string prizeName[] = {"頭","二","三","四","五","六"};
    cout << "特別獎： " << specialCount << " 張"<< endl;
    for(int i = 0;i < 6;i++)
        cout << prizeName[i] << "獎： " << normalCount[i] << " 張" << endl;

    int prizeBonus[] = {200000,40000,10000,4000,1000,200};
    long long int sum = 0;
    sum += 2000000 * specialCount;
    for(int i = 0;i < 6;i++)
        sum += prizeBonus[i] * normalCount[i];

    cout << endl << "總獎金： " << sum << endl;

    return 0;
}
