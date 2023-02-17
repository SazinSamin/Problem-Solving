#include<bits/stdc++.h>
using namespace std;


int f91(int n) {
        return (n >= 101) ? n - 10 : f91(f91(n + 11));
}

int main () {
        int n;
        cin >> n;
        cout << f91(n);
}
