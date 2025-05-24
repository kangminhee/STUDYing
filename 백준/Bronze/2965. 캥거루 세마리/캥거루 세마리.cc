#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
	int arr[3] = {};

	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	
	sort(arr, arr + 3);

	cout << max(arr[2]-arr[1], arr[1]-arr[0])-1 << '\n';

	return 0;
}
