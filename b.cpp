#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Diverse Substring

void solve() {
    int n;
    string a;
    cin >> n >> a;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        vector<int> c(10, 0);
        int maxf = 0, dis = 0;
        for(int j = i; j <= i + 99 && j < n; j++) {
            c[a[j] - '0']++;
            maxf = max(maxf, c[a[j] - '0']);
            if(c[a[j] - '0'] == 1){
                dis++;
            }
            if(dis >= maxf)
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
