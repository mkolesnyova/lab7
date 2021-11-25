#include <iostream>
#include <stdlib.h> /*random*/
#include <iomanip>/*setw*/
using namespace std;
int main()
{
	const int n = 4, m = 10;/*n-количество строк, m-количество столбцов */
	int i, k = 0, j;
	int a[n][m];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			a[i][j] = rand() % 10;
			if (a[i][j] > 0) k++;
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}