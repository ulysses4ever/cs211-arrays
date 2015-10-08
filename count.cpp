#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int nwhite, nother;
	const int size = 10;
	int ndigit[size]{0};
	nwhite = nother = 0;

	char c;

	for (int j = 0; j < src.length(); j ++)
	{
		c = src[j];

		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < size; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl << endl;

	cout << "table:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "symbol " << i << " contains " << ndigit[i] << " times\n";
	}

	cout << "white space" << " contains " << nwhite << " times\n";
	cout << "others" << " contains " << nother << " times\n";

	system("pause");
}
