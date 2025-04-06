#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cout.precision(10);

	int n, l, h;
	double arr[51] = {}, sum = 0;
	cin >> n >> l >> h;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + n);
	for (int i = 0; i < l; i++) {
		sum -= arr[i];
	}
	for (int i = 0; i < h; i++) {
		sum -= arr[n - i - 1];
	}
	cout << (double)(sum / (n - l - h));
}
