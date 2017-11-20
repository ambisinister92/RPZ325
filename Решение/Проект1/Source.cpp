#include<iostream> 
#include<algorithm> 
#include <vector> 
#include<string> 
using namespace std;

void solve() {
	int n;
	cin >> n;
	n *= 2;
	vector<int> w(n);
	for (int i = 0; i < n; i++)
		cin >> w[i];
	sort(w.begin(), w.end());

	unsigned int min = UINT_MAX;
	for (int l = 0; l < n - 1; l += 2) {
		for (int m = l + 1; m < n; m += 2)
		{ 
			unsigned int buf = 0;
			for (int i = 0; i < n - 1; i += 2) {
				if (i == l || i == m) {
					i--;
					continue;
				}
				buf += w[i + 1] - w[i];
			}
			if (buf < min)
				min = buf;
		}
	}

	cout << "Min: " << min << endl;
}

int main() {
	solve();
	system("pause");
	return 0;
}