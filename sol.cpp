#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		long long res = LLONG_MIN;
		auto GetMax = [&](long long x, long long y) {
			return (x > y ? x : y);
		};
		for (int i = 0; i < n; i++) {
			// divide 'k' by the minutes of every stone and multiply it to 
			// profit per stone to get the total profit available for every stone
			// compare every total profit for every stone and get the maximum value
			res = GetMax(res, (k / a[i]) * 1LL * b[i]);
		}
		cout << res << '\n';
	}
	return 0;
}
