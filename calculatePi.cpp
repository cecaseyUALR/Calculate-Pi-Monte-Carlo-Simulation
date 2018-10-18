#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
	double x, y, pi;
	long count = 0;
	// Throw 100000 darts randomly inside unit square
	for (int i = 0; i < 100000; i++)
	{
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		if (pow(x, 2) + pow(y, 2) <= 1) {
			count++;
		}
	}
	// count = number of "darts" that landed inside first quadrant that satisfies (0 <= x <= 1, 0 <= y <= 1)
	pi = (double)(4 * count) / 100000;
	// Since there are 4 quadrants to make up a circle, multiply by four. This gives approximation of pi.
	cout << pi << endl;

	system("pause");
	return 0;
}