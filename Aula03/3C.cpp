#include <bits/stdc++.h>

using namespace std;

int n, k, freq[40];

int main () {
    string s;
    
    cin >> n >> k >> s;
    
    for (int i = 0; i < s.size(); i++)
        freq[s[i]-'A']++;
        
    int min_freq = freq[0];

    for (int i = 'B'-'A'; i < k; i++)
        min_freq = min(min_freq, freq[i]);

    printf("%d\n", min_freq * k);   
    
}
