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
    int Q;
    cin >> Q;

    sort(A.begin(), A.end());
    auto judge = [&](int mid, int X){
        return (A[mid] < X);
    };

    while(Q--){
        int X; cin >> X;
        // 二分探索
        int ok = -1, ng = A.size();
        while(ng - ok > 1){
            int mid = (ok + ng) / 2;
            if(judge(mid, X)) ok = mid;
            else ng = mid;
        }
        cout << ok + 1 << endl;
    }
}