#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1LL << 60;

#ifdef LOCAL
#include <debug_print.hpp>
#define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (static_cast<void>(0))
#endif

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    int N, W;
    cin >> N >> W;
    vector<ll> w(N), v(N);
    for(int i = 0; i < N; i++) cin >> w[i] >> v[i];

    // dp[i][j] := i個目までで価値をjにするときの重さの最小値
    vector dp(N + 1, vector<ll>(1e5 + 1, INF));
    dp[0][0] = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= 1e5; j++){
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if(j + v[i] <= 1e5) dp[i + 1][j + v[i]] = min(dp[i + 1][j + v[i]], dp[i][j] + w[i]);
        }
    }

    int ans = 0;
    for(int i = 0; i <= 1e5; i++){
        if(dp[N][i] <= W) ans = max(ans, i);
    }

    cout << ans << endl;
}