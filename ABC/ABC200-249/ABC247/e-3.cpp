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
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    ll ans = 0;
    int px = -1, py = -1, pz = -1;
    for(int i = 0; i < N; i++){
        if(A[i] == X) px = i;
        if(A[i] == Y) py = i;
        if(A[i] < Y || X < A[i]) pz = i;
        ans += max(0, min(px, py) - pz);
    }

    cout << ans << endl;
}