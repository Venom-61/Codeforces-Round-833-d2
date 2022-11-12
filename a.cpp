#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. the Ultimate Square

void solve() {
    int n;
    cin >> n;
    if(n % 2 == 0) 
        cout << n / 2;
    else 
        cout << n / 2 + 1;
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout << fixed;
    cout << setprecision(0);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
