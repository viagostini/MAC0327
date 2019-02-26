#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, a;
    
    cin >> n;
    
    int even = 0, odd = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        
        if (a % 2 == 0)
            even += 1;
        else
            odd += 1;
    }
    
    if (odd % 2)
        printf("%d\n", odd);
    else
        printf("%d\n", even);
     
}
