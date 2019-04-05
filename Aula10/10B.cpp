#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define mp make_pair
#define f first
#define s second
#define pb push_back
#define pii pair<int,int>

bool seen[55] = {false};

int main () {
    int n;
    cin >> n;
    int mat[n][n];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    for (int row = 0; row < n; row++) {
        int maxi = *(max_element(mat[row], mat[row]+n));
        if (seen[maxi] == false) {
            cout << maxi << " ";
            seen[maxi] = true;
        } else {
            cout << n << " ";
        }
    }
}
