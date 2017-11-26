// kayaki.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#include <vector> 
using namespace std;
int n, x[105], ans = INT_MAX, ta, tb;
vector<int>y;
int main()
{
	cin >> n;
	n *= 2;
	for (int i = 0; i<n; i++)
		cin >> x[i];
	sort(x, x + n);
	for (int i = 0; i<n; i++)
		for (int j = 0; j<i; j++)
		{
			ta = tb = 0;
			for (int k = 0; k<n; k++)
				if (k != i&&k != j)
				{
					if (tb % 2)
						ta += x[k];
					else
						ta -= x[k];
					tb++;
				}
			ans = min(ans, ta);
		}
	cout << ans;

	system("pause");
	return 0;
}
