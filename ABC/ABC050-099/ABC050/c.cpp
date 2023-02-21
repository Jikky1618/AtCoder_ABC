#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

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
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    map<int, ll> cnt;
    for(auto&& a: A) cnt[a]++;

    ll ans = 1;
    for(auto&& [key, val]: cnt){
        if(key == 0 && val != 1) ans = 0;
        if(key != 0 && val != 2) ans = 0;
        ans *= val, ans %= MOD;
    }

    cout << ans << endl;
}