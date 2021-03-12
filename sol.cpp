#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the array in non-decreasing order
	sort(a.begin(), a.end());
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			// check every distinct pair of there difference is 
			// less than or equal to 'd'
			if (abs(a[i] - a[j]) <= d) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
