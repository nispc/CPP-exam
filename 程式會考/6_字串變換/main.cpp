#include <iostream>
using namespace std;

int main() {
	int arr1[6],arr2[6];

	for(int i = 0;i < 6;i++)
		cin >> arr1[i];
	for(int i = 0;i < 6;i++)
		cin >> arr2[i];

	for(int i = 0;i < 6;i++)
	{
		if((arr1[i] + arr2[i])%2)
			cout << "1";
		else
            cout << "0";
	}
	cout << endl;

	return 0;
}
