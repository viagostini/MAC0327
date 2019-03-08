#include <bits/stdc++.h>

using namespace std;

int dx[5] = {0, 0, 0, 1, -1};
int dy[5] = {0, 1, -1, 0, 0};

bool safe (int x, int y) {
    if (x < 0 || y < 0) return false;
    if (x > 2 || y > 2) return false;
    return true;
}

int main () {
    int g[3][3], f[3][3] = {0};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> g[i][j];
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 5; k++)
                if (safe(i+dx[k], j+dy[k]))
                    f[i+dx[k]][j+dy[k]] += g[i][j];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (f[i][j] % 2)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }
}
