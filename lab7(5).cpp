#include <iostream>
using namespace std;
int main()
{
const int n=5;
int a[n][n], i, j, m=0, v=0;
for (j=0;j<n;j++)
 for (i=0;i<n;i++)
  {a[i][j]= rand()%10;
   if (a[i][j]%2) {int h[]=a[i][j]; m++;}
    else {int k[]=a[i][j]; v++;}
   }
for (i=0;i<m;i++) cout<< h[i]<<" ";
cout <<endl;
for (i=0;i<v;i++) cout<< k[i]<<" ";
}