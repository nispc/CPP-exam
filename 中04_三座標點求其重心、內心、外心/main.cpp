#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3;
    char chr;
    cin >> x1 >> chr >> y1;
    cin >> x2 >> chr >> y2;
    cin >> x3 >> chr >> y3;

    double a = sqrt(x1*x1+y1*y1);
    double b = sqrt(x2*x2+y2*y2);
    double c = sqrt(x3*x3+y3*y3);

    double cosA = (b*b + c*c - a*a)/2/b/c;
    double cosB = (c*c + a*a - b*b)/2/a/c;
    double cosC = (a*a + b*b - c*c)/2/a/b;

    //cout << a << " " << b << " " << c << endl;
    //cout << cosA << " " << cosB << " " << cosC << endl;

    cout.setf(ios::fixed);
    cout<<setprecision(2);

    //重心
    cout << (x1+x2+x3)/3 << " " << (y1+y2+y3)/3 << endl;

    //外心
    cout << (a*x1*cosA + b*x2*cosB+ c*x3*cosC) / (a*cosA+b*cosB+c*cosC) << " ";
    cout << (a*y1*cosA + b*y2*cosB+ c*y3*cosC) / (a*cosA+b*cosB+c*cosC) << endl;

    //內心
    cout << (a*x1+b*x2+c*x3)/(a+b+c) << " " << (a*y1+b*y2+c*y3)/(a+b+c) << endl;

    return 0;
}
