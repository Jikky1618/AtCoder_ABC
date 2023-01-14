#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int xor_sum = 0;
    for(int i = 0; i < N; i++) xor_sum ^= A[i];

    cout << (xor_sum != 0 ? "First" : "Second") << endl;
}