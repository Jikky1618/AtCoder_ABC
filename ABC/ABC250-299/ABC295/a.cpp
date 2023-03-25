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
    vector<string> W(N);
    for(int i = 0; i < N; i++) cin >> W[i];

    vector<string> S{"and", "not", "that", "the", "you"};
    for(int i = 0; i < N; i++){
        if(count(S.begin(), S.end(), W[i]) != 0){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}