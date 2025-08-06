#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int n, m;
int arr[1010][1010] = {};
bool visited[1010][1010] = {};

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    vector<pair<int, int>> wall;

    q.push({x, y});
    visited[x][y] = true;

    int cnt = 1;

    while (!q.empty()) {
        int X = q.front().first; int Y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int XX = X + dx[i];
            int YY = Y + dy[i];

            if (XX < 0 || XX >= n || YY < 0 || YY >= m) continue;
            
            if (arr[XX][YY] == 0 && visited[XX][YY] == false) {
                visited[XX][YY] = true;
                q.push({XX, YY});
                cnt++;
            }
            else if (arr[XX][YY] != 0 && visited[XX][YY] == false) {
                visited[XX][YY] = true;
                wall.push_back({XX, YY});
            }
        }
    }
    for (int i = 0; i < wall.size(); i++) {
        arr[wall[i].first][wall[i].second] += cnt;
        visited[wall[i].first][wall[i].second] = false;
    }
}

int main() {
    cin >> n >> m;
    char c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            arr[i][j] = c - '0';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0 && visited[i][j] == false) {
                bfs(i, j);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j]%10;
        }
        cout << '\n';
    }
    return 0; 
}