#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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

    vector<ll> S(N + 1, 0);
    for(int i = 0; i < N; i++) S[i + 1] = S[i] + A[i];

    ll ans = 0;
    map<ll, int> mp;
    for(int i = 0; i <= N; i++){
        ans += mp[S[i]];
        mp[S[i]]++;
    }

    cout << ans << endl;
}