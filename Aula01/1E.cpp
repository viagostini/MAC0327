// Soma de angulos internos de poligono: 180(n-2) onde n = numero de lados
// x angulos de 270, n-x angulos de 90
// x = numero de curvas perigosas

// 180(n-2) = 270x + 90(n-x)
// x = n/2 - 2

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n/2 - 2 << endl;
}
