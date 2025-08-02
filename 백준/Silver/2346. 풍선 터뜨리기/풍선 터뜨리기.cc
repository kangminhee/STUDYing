#include <bits/stdc++.h>
using namespace std;
deque<pair<int, int>> dq;

int main(void) {
    int n, a; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		dq.push_back({a, i+1});
	}

	while (!dq.empty()) {
		int cur = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();

		if (dq.empty()) break;

		if (cur > 0) {
			for (int i = 0; i < cur-1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		} else {
			for (int i = 0; i < cur*(-1); i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
    return 0;
}
