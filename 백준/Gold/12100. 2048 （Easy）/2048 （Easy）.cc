#include <bits/stdc++.h>
using namespace std;

int n, maxi; 
int arr[21][21];

void left() {
    for (int i = 0; i < n; i++) {
        queue<int> q;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != 0) q.push(arr[i][j]);
        }

        queue<int> to;
        while (!q.empty()) {
            int a = q.front(); q.pop();
            if (!q.empty() && q.front() == a) {
                to.push(a * 2);
                q.pop();
            } else {
                to.push(a);
            }
        }

        for (int j = 0; j < n; j++) {
            if (!to.empty()) {
                arr[i][j] = to.front(); to.pop();
            } else {
                arr[i][j] = 0;
            }
        }
    }
}

void right() {
    for (int i = 0; i < n; i++) {
        queue<int> q;
        for (int j = n - 1; j >= 0; j--) {
            if (arr[i][j] != 0) q.push(arr[i][j]);
        }

        queue<int> to;
        while (!q.empty()) {
            int a = q.front(); q.pop();
            if (!q.empty() && q.front() == a) {
                to.push(a * 2);
                q.pop();
            } else {
                to.push(a);
            }
        }

        for (int j = n - 1; j >= 0; j--) {
            if (!to.empty()) {
                arr[i][j] = to.front(); to.pop();
            } else {
                arr[i][j] = 0;
            }
        }
    }
}
void up() {
    for (int j = 0; j < n; j++) {
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (arr[i][j] != 0) q.push(arr[i][j]);
        }

        queue<int> to;
        while (!q.empty()) {
            int a = q.front(); q.pop();
            if (!q.empty() && q.front() == a) {
                to.push(a * 2);
                q.pop();
            } else {
                to.push(a);
            }
        }

        for (int i = 0; i < n; i++) {
            if (!to.empty()) {
                arr[i][j] = to.front(); to.pop();
            } else {
                arr[i][j] = 0;
            }
        }
    }
}
void down() {
    for (int j = 0; j < n; j++) {
        queue<int> q;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i][j] != 0) q.push(arr[i][j]);
        }

        queue<int> to;
        while (!q.empty()) {
            int a = q.front(); q.pop();
            if (!q.empty() && q.front() == a) {
                to.push(a * 2);
                q.pop();
            } else {
                to.push(a);
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (!to.empty()) {
                arr[i][j] = to.front(); to.pop();
            } else {
                arr[i][j] = 0;
            }
        }
    }
}


vector<void(*)()> direc = {left, right, up, down};

int getMax() {
    int maxVal = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            maxVal = max(maxVal, arr[i][j]);
    return maxVal;
}

void sol(int depth) {
    if (depth == 5) {
        maxi = max(maxi, getMax());
        return;
    }

    for (int i = 0; i < 4; i++) {
        int backup[21][21];
        memcpy(backup, arr, sizeof(arr));
        direc[i]();
        sol(depth+1);
        memcpy(arr, backup, sizeof(arr));
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }
    sol(0);
    cout << maxi;

}