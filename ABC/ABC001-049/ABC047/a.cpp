#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    vector<int> A(3);
    for(int i = 0; i < 3; i++) cin >> A[i];

    sort(A.begin(), A.end(), greater<int>());
    cout << (A[0] == A[1] + A[2] ? "Yes" : "No") << endl;
    return 0;
}