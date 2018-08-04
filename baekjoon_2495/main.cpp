#include <iostream>
using namespace std;

int main()
{
	int c, max;
	char i1[9], n;
	for (int i = 0; i < 3; i++) {
		c = 1;
		max = -1;
		cin >> i1;
		n = i1[0];
		for (int j = 1; j < 8; j++) {
			if (n == i1[j]) c++;
			else {
				n = i1[j];
				c = 1;
			}
			if (max < c) max = c;
		}
		cout << max << endl;
	}
	return 0;
}