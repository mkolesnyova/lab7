#include <iostream>
#include <stdlib.h> /*random*/
#include <iomanip>/*setw*/
using namespace std;
int main()
{
	const int v = 4, m = 10;/*n-количество строк, m-количество столбцов */
	int i, k = 0, j, min, c;
	int a[v][m];
	for (i = 0; i < v; i++)
	{
		for (j = 0; j < m; j++)
		{
			a[i][j] = rand() % 10;
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
	for (i = 0; i < v; i++)
	{
		min = 9;
		c = 0;
		for (j = 0; j < m; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				c = j;
			}
		}
		cout << "nomer minimalnogo v " << i + 1 << " stroke= " << c + 1 << endl;
	}

}

	