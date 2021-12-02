#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    int a[n][n], h[n*n], k[n*n], i, j, m=0, v=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            if (a[i][j] % 2 == 1)
            {
                h[m] = a[i][j];
                m++;
            }
            else
            {
                k[v] = a[i][j];
                v++;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------"<<endl;
    for (i = 0; i < m; i++)
    {
        if (h[i] != 0) cout << h[i] << " ";
    }
    cout << endl;
    for (i = 0; i < v; i++)
    {
        if (k[i] != 0) cout << k[i] << " ";
    }
    cout << endl;

}
/* 
#include <iostream>
#include <stack> 
using namespace std;
int main()
{
    stack <int> steck1;
    stack <int> steck2;
    const int n = 5;
    int a[n][n],h[n*n],k[n*n], i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
            if (a[i][j] % 2)
                steck1.push(a[i][j]);
            else
                steck2.push(a[i][j]);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < n * n; i++, steck1.pop()) h[i] = steck1.top();
    for (i = 0; i < n * n; i++, steck2.pop()) k[i] = steck2.top();
    for (i = 0; i < n * n; i++)
        if (h[i] != 0) cout << h[i] << " ";
    cout << endl;
    for (i = 0; i < n * n; i++)
        if (k[i] != 0) cout << k[i] << " ";
    cout << endl;
}
*/
