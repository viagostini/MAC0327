#include <bits/stdc++.h>

using namespace std;

int main () {
    int old_size, size;
    string s;
    cin >> s;

    old_size = s.size();
    s.erase(remove(s.begin(), s.end(), '1'), s.end());
    size = s.size();

    string ones = string(old_size-size, '1');
    int pos = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '2') {
             pos = i;
             break;
        }
    }

    if (pos == -1)
        s.insert(s.size(), ones);
    else
        s.insert(pos, ones);
    cout << s << endl;
}
