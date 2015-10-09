#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i, nwhite, nother;
	const int size = 10;
	int ndigit[size]{ 0 };
	nwhite = nother = i = 0;

	char c;
	while ((c = src[i++]) != '\0')
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < size; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl;

	//Histogram

	cout << endl << "Histogram:" << endl << endl;

	//digits
	for (int j = 0; j < size; ++j)
	{
		cout << "     " << j << ":";
		for (int k = 0; k < ndigit[j]; ++k)
			cout << "#";
		cout << endl;
	}

	//spaces
	cout << "Spaces:";
	for (int j = 0; j < nwhite; ++j)
		cout << "#";
	cout << endl;

	//others
	cout << "Others:";
	for (int j = 0; j < nother; ++j)
		cout << "#";
	cout << endl << endl;
}
