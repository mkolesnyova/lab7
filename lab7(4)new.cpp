#include <iostream>
#include <cmath>/*pow*/
using namespace std;
int main()
{
	const int n = 3;
	int i, j, k = 0;
	double v, f;
	int a[n][n];
	int p = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if ((a[i][j] < 0) && (i > n - j - 1))
			{
				p *= a[i][j];
				k++;
			}
		}
	}
	v = 1 / k;
	f = pow(p, v);
	cout << "sr.geom= " << f;
}