#include <bits/stdc++.h>

using namespace std;

int main (){
    int n, len;
    string word;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word.size() <= 10)
            cout << word << endl;
        else
            printf("%c%d%c\n", word.front(), word.size()-2, word.back());
    }
}
