#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors;
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 *
 */

 void drawHist(const int * arr, int size) {
    // 0 1 2 3 4 5 6 7 8 9
    for (int i = 0; i < size; i++)
        cout << i << ' ';
    cout << endl;

    // num of rows
    int max = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > max)
            max = arr[i];

    for (int row = 0; row < max; row++) {
        for (int i = 0; i < size; i++)
            cout << (arr[i] > row ? "* " : "  ");
        cout << '\n';
    }
 }

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i, nwhite, nother;
	const int size = 10;
	int ndigit[size] = {0};
	i = nwhite = nother = 0;

	char c;
	while ((c = src[i++]) != '\n')
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
		 << ", other = " << nother << '\n' << endl;

    drawHist(ndigit, size);
}
