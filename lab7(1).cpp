#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a[12][10], k = 1;
	for (int j = 9; j >= 0; j--)
	{
		for (int i = 0; i <=11; i++, k++)
		{
			a[i][j] = k;
		}
	}

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << a[i][j] << setw(4);
		}
		cout << endl;
	}
}
