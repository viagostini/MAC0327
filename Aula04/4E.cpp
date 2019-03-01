#include <bits/stdc++.h>

using namespace std;

int k, f[300];
string s, ans = "";
string dic = "abcdefghijklmnopqrstuvwxyz";

int main () {
    cin >> k >> s;
    
    for (char c : s)
        f[c] += 1;

    for (char c : dic) {
        if (f[c] % k) {
            printf("-1\n");
            return 0;
        }
    }
    
    for (char c : dic) {
        if (f[c]) {
            int j = f[c]/k;
            ans.append(string(j, c));
        }
    }

    string ret = "";
    for (int i = 0; i < k; i++)
        ret.append(ans);

    cout << ret << endl;

}
