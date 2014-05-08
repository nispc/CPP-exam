#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    int grade[5] = {};
    int sum = 0;
    for(int i = 1;i < argc;i++)
    {
        int num = atoi(argv[i]);
        sum += num;
        int p = num>=80?0:num>=60?1:num>=40?2:num>=30?3:4;
        grade[p]++;
    }
    double avg = (double)sum/(argc-1);

    cout << sum << endl;
    cout << avg << endl;
    for(int i = 0;i < 5;i++)
        cout << (char)('A'+i) << ": " << grade[i] << endl;

    return 0;
}
