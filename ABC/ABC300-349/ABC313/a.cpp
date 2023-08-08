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
    vector<int> P(N);
    for(int i = 0; i < N; i++) cin >> P[i];

    int M = 0;
    for(int i = 1; i < N; i++) M = max(M, P[i]);

    cout << max(M - P[0] + 1, 0) << endl;
}