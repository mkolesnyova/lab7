#include <iostream>
#include <cmath>/*pow*/
using namespace std;
int main()
{
	const int n = 3;
	int i, j;
	double k = 0, v, f, h;
	double a[n][n];
	double p = 1;
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
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "p=" << p << endl << "k=" << k<<endl;
	h = p;
	if (p < 0) h = p *(-1);
	v = 1 / k;
	f = pow(h, v);
	if (p<0) cout << "sr.geom= -" << f;
	else cout << "sr.geom= " << f;
}
