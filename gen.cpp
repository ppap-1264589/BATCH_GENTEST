#include <bits/stdc++.h>
#define up(i,a,b) for (int i = (int)a; i <= (int)b; i++)
#define down(i,a,b) for (int i = (int)a; i >= (int)b; i--)
#define pii pair<int, int>
#define f first
#define s second
#define ep emplace_back
using namespace std;

mt19937_64 RNG(chrono::high_resolution_clock::now().time_since_epoch().count());
int UID(int l, int r){
    uniform_int_distribution<mt19937_64::result_type> ran_num(l, r);
    return ran_num(RNG);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n = UID(1, 1000);
    cout << n;
}
