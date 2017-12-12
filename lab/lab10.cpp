#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	struct yep {
		char str[80];
	};

	yep uo[10];

	ifstream fp("text.txt");
	ofstream fp2("text2.txt");

	int i = 0;

	cout << "\n text.txt\n\n";

	while (!fp.eof())
	{
		fp.getline(uo[i].str, 80, '\n');
		cout << uo[i].str << endl;
		i++;
	}

	cout << "\n text2.txt\n\n";

	for (--i; i >= 0; i--)
	{
		cout << uo[i].str << endl;
		fp2 << uo[i].str << endl;
	}

	fp.close();
	fp2.close();

	getchar();
	return 0;
}