#include "
#include <iostream>
#include <string>
using namespace std;

string reverse(string str)
{
	string tmp;
	for (int i = str.length(); i >= 0; i--)
	{
		tmp += str[i];
	}
	return tmp;
}

int main()
{
	string a;
	cout << "Type in your string" << endl;
	cin >> a;
	cout << "in reverse: " << reverse(a) << endl;

	system("PAUSE");
	return 0;
}
