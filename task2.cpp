#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void func(string s,int f[6]) {
	for (int i = 0; i < 6; i++)
		f[i] = 0;
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'a')
			f[0]++;
		if (s[p] == 'e')
			f[1]++;
		if (s[p] == 'y')
			f[2]++;
		if (s[p] == 'u')
			f[3]++;
		if (s[p] == 'i')
			f[4]++;
		if (s[p] == 'o')
			f[5]++;
	}

}

int main()
{
	string s;
	int mas[6];
	getline(cin, s);
	func(s,mas);
	cout << "a = " << mas[0] << " " << "e = " << mas[1] << " " << "y = " << mas[2] << " " << "u = " << mas[3] << " " << "i = " << mas[4] << " " << "o = " << mas[5] << endl;
	system("pause");
	return 0;
}
