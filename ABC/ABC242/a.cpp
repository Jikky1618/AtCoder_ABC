#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    double a,b,c,x;
    cin >> a >> b >> c >> x;

    double ans;
    if(x <= a) ans = 1;
    else if(x <= b) ans = c / (b - a);
    else ans = 0;

    cout << ans << endl;

    return 0;
}