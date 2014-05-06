#include <iostream>

using namespace std;

int letterToNum(char);

int main()
{
    char id[10];
    cin >> id;

    char letter = id[0];
    int letterNum =   letterToNum(letter);

    int sum = 0;
    sum  += (letterNum%10)*9 + letterNum/10;

    for(int i = 1;i < 9;i++)
        sum += (id[i]-'0') * (8-i+1);

    sum += id[9]-'0';

    if(!(sum%10))
        cout << "正確!" << endl;
    else
        cout << "錯誤!" << endl;

    return 0;
}

int letterToNum(char letter)
{
    int letterNum;

    switch(letter)
    {
        case 'A':
            letterNum = 10;
            break;
        case 'B':
            letterNum = 11;
            break;
        case 'C':
            letterNum = 12;
            break;
        case 'D':
            letterNum = 13;
            break;
        case 'E':
            letterNum = 14;
            break;
        case 'F':
            letterNum = 15;
            break;
        case 'G':
            letterNum = 16;
            break;
        case 'H':
            letterNum = 17;
            break;
        case 'I':
            letterNum = 34;
            break;
        case 'J':
            letterNum = 18;
            break;
        case 'K':
            letterNum = 19;
            break;
        case 'L':
            letterNum = 20;
            break;
        case 'M':
            letterNum = 21;
            break;
        case 'N':
            letterNum = 22;
            break;
        case 'O':
            letterNum = 35;
            break;
        case 'P':
            letterNum = 23;
            break;
        case 'Q':
            letterNum = 24;
            break;
        case 'R':
            letterNum = 25;
            break;
        case 'S':
            letterNum = 26;
            break;
        case 'T':
            letterNum = 27;
            break;
        case 'U':
            letterNum = 28;
            break;
        case 'V':
            letterNum = 29;
            break;
        case 'W':
            letterNum = 32;
            break;
        case 'X':
            letterNum = 30;
            break;
        case 'Y':
            letterNum = 31;
            break;
        case 'Z':
            letterNum = 33;
            break;
    }
    return letterNum;
}
