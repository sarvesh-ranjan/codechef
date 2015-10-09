#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;

int a[10000];

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (m--) {
        int l, r;
        cin >> l >> r;
        double c = 0;
        for (int i = l; i <= r; i++) {
            c += log(a[i]);
        }
        c /= r - l + 1;
        c = exp(c);
        printf("%.10lf\n", c);
    }
}

int main() {
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        printf("Case #%d:\n", i);
        solve();
    }
    return 0;
}

