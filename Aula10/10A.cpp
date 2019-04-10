#include <bits/stdc++.h>

using namespace std;

vector<string> getTwoGrams(string s) {
    vector<string> ret;
    for (int i = 0; i < s.size()-1; i++) {
        string ss = s.substr(i,2);
        ret.push_back(ss);
    }
    return ret;
}

int count(string s, string ss) {
    int ret = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ss[0] && s[i+1] == ss[1])
            ret++;
    }
    return ret;
}

int main () {
    int n;
    string s;

    cin >> n >> s;

    int ans = 0;
    string ret;
    vector<string> twoGrams = getTwoGrams(s);
    for (string ss : twoGrams) {
        int x = count(s, ss);
        if (x > ans) {
            ret = ss;
            ans = x;
        }
    }
    cout << ret << endl;
}
